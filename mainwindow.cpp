#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QtGlobal>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    archivo="libros.txt";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_registrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->page_Registrar));
}


void MainWindow::on_btn_ver_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->page_Ver));
}


void MainWindow::on_btn_actualizar_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->page_Actualizar));
}


void MainWindow::on_btn_eliminar_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->page_Eliminar));
}


void MainWindow::guardar_Archivo(const QString &nombre, const QString &autor, const QString &fecha, const QString &calificacion)
{
    QFile file(archivo);
    if (!file.open(QIODevice::Append|QIODevice::Text)){
        QMessageBox::critical(this,
                              "Error",
                              "No se pudo abrir el archivo para guardar");
        return;
    }
    QTextStream out(&file);
    int nextId = 1;
    if (file.size() > 0) {
        QFile readFile(archivo);
        if (readFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&readFile);
            QStringList lines = in.readAll().split('\n', Qt::SkipEmptyParts);
            if (!lines.isEmpty()) {
                QString lastLine = lines.last();
                QStringList fields = lastLine.split(',');
                if (!fields.isEmpty()) {
                    bool ok;
                    int lastId = fields.first().toInt(&ok);
                    if (ok) nextId = lastId + 1;
                }
            }
            readFile.close();
        }
    }

    out << nextId << "," << nombre << "," << autor << ","
        << fecha << "," << calificacion << "\n";
    file.close();
}

QList<QStringList> MainWindow::leer_Archivo()
{
    QList<QStringList> libros;
    QFile file(archivo);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return libros;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;
        QStringList fields = line.split(',');
        if (fields.size() >= 5) {
            libros.append(fields);
        }
    }
    file.close();
    return libros;
}

void MainWindow::tabla_Ver()
{
    QTableWidget *tabla = ui->tabla_libros;
    tabla->clearContents();
    tabla->setRowCount(0);

    QList<QStringList> libros = leer_Archivo();
    tabla->setRowCount(libros.size());

    for (int i = 0; i < libros.size(); ++i) {
        QStringList fields = libros.at(i);
        for (int j = 0; j < fields.size() && j < 5; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(fields.at(j));
            tabla->setItem(i, j, item);
        }
    }
}


void MainWindow::on_btn_registrar_registro_clicked()
{
    QString nombre=ui->txt_nombre_registro->text().trimmed();
    QString autor=ui->txt_autor_registro->text().trimmed();
    QString fecha=ui->txt_fecha_registro->text().trimmed();
    QString calificacion=ui->txt_calificacion_registro->text().trimmed();
    if (nombre.isEmpty()||autor.isEmpty()||fecha.isEmpty()||calificacion.isEmpty()){
        QMessageBox::warning(this,
                             "Campos incompletos",
                             "Por favor no dejar campos vacios.");
        return;
    }
    guardar_Archivo(nombre,autor,fecha,calificacion);
    ui->txt_nombre_registro->clear();
    ui->txt_autor_registro->clear();
    ui->txt_fecha_registro->clear();
    ui->txt_calificacion_registro->clear();
    QMessageBox::information(this,
                             "Exito",
                             "Libro registrado correctamente.");
}


void MainWindow::on_btn_Recargar_ver_clicked()
{
    tabla_Ver();
}

void MainWindow::limpiar_Campos_Actualizar()
{
    ui->txt_id_actualizar->clear();
    ui->txt_nombre_actualizar->clear();
    ui->txt_autor_actualizar->clear();
    ui->txt_fecha_actualizar->clear();
    ui->txt_calificacion_actualizar->clear();
    ui->txt_libro_actualizar->clear();
}

void MainWindow::on_btn_buscar_actualizar_clicked()
{
    QString nombreBuscar = ui->txt_libro_actualizar->text().trimmed();
    if (nombreBuscar.isEmpty()) {
        QMessageBox::warning(this,
                             "Campo vacio",
                             "Ingrese el nombre del libro.");
        return;
    }

    QList<QStringList> libros = leer_Archivo();
    bool encontrado = false;

    for (const auto &fields : qAsConst(libros)) {
        if (fields.size() >= 5 && fields.at(1).compare(nombreBuscar, Qt::CaseInsensitive) == 0) {
            ui->txt_id_actualizar->setText(fields.at(0));
            ui->txt_nombre_actualizar->setText(fields.at(1));
            ui->txt_autor_actualizar->setText(fields.at(2));
            ui->txt_fecha_actualizar->setText(fields.at(3));
            ui->txt_calificacion_actualizar->setText(fields.at(4));
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        QMessageBox::information(this,
                                 "No encontrado",
                                 "No se encontro libro con ese nombre.");
        limpiar_Campos_Actualizar();
    }
}

void MainWindow::actualizar_Archivo(int id, const QString &nombre, const QString &autor,
                                    const QString &fecha, const QString &calificacion)
{
    QList<QStringList> libros = leer_Archivo();
    bool actualizado = false;

    for (int i = 0; i < libros.size(); ++i) {
        if (libros.at(i).at(0).toInt() == id) {
            libros[i] = QStringList() << QString::number(id) << nombre << autor << fecha << calificacion;
            actualizado = true;
            break;
        }
    }

    if (!actualizado) {
        QMessageBox::critical(this,
                              "Error",
                              "No se encontró el libro.");
        return;
    }

    // Reescribir todo el archivo
    QFile file(archivo);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,
                              "Error",
                              "No se pudo abrir el archivo.");
        return;
    }

    QTextStream out(&file);
    for (const auto &fields : qAsConst(libros)) {
        out << fields.join(",") << "\n";
    }
    file.close();

    QMessageBox::information(this,
                             "Exito",
                             "Libro actualizado correctamente.");
    limpiar_Campos_Actualizar();
}

void MainWindow::on_btn_actualizar_actualizar_clicked()
{
    QString idStr = ui->txt_id_actualizar->text().trimmed();
    QString nombre = ui->txt_nombre_actualizar->text().trimmed();
    QString autor = ui->txt_autor_actualizar->text().trimmed();
    QString fecha = ui->txt_fecha_actualizar->text().trimmed();
    QString calificacion = ui->txt_calificacion_actualizar->text().trimmed();

    if (idStr.isEmpty() || nombre.isEmpty() || autor.isEmpty() || fecha.isEmpty() || calificacion.isEmpty()) {
        QMessageBox::warning(this,
                             "Campos incompletos",
                             "Complete todos los campos antes de actualizar.");
        return;
    }

    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this,
                             "ID invalido",
                             "El ID debe ser numero.");
        return;
    }

    actualizar_Archivo(id, nombre, autor, fecha, calificacion);
}

void MainWindow::cargar_Tabla_Eliminar(const QString &nombreBuscar)
{
    QTableWidget *tabla = ui->tabla_eliminar;
    tabla->clearContents();
    tabla->setRowCount(0);

    QList<QStringList> todos = leer_Archivo();
    QList<QStringList> filtrados;

    if (nombreBuscar.isEmpty()) {
        filtrados = todos;
    } else {
        for (const QStringList &fields : todos) {
            if (fields.size() >= 5 && fields.at(1).contains(nombreBuscar, Qt::CaseInsensitive)) {
                filtrados.append(fields);
            }
        }
    }

    tabla->setRowCount(filtrados.size());
    for (int i = 0; i < filtrados.size(); ++i) {
        QStringList fields = filtrados.at(i);
        for (int j = 0; j < fields.size() && j < 5; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(fields.at(j));
            tabla->setItem(i, j, item);
        }
    }

    if (filtrados.isEmpty() && !nombreBuscar.isEmpty()) {
        QMessageBox::information(this, "Sin resultados", "No se encontraron libros con ese nombre.");
    }
}

void MainWindow::on_btn_buscar_eliminar_clicked()
{
    QString nombreBuscar = ui->txt_libro_eliminar->text().trimmed();
    cargar_Tabla_Eliminar(nombreBuscar);
}

void MainWindow::eliminar_Archivo(int id)
{
    QList<QStringList> libros = leer_Archivo();
    bool eliminado = false;
    QList<QStringList> nuevosLibros;

    for (const auto &fields : qAsConst(libros)) {
        if (fields.at(0).toInt() != id) {
            nuevosLibros.append(fields);
        } else {
            eliminado = true;
        }
    }

    if (!eliminado) {
        QMessageBox::critical(this,
                              "Error",
                              "No se encontro el libro.");
        return;
    }

    QFile file(archivo);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,
                              "Error",
                              "No se pudo abrir el archivo.");
        return;
    }

    QTextStream out(&file);
    for (const QStringList &fields : nuevosLibros) {
        out << fields.join(",") << "\n";
    }
    file.close();

    QMessageBox::information(this,
                             "Exito",
                             "Libro eliminado correctamente.");
    ui->txt_libro_eliminar->clear();
    cargar_Tabla_Eliminar();
}

void MainWindow::on_btn_eliminar_eliminar_clicked()
{
    int row = ui->tabla_eliminar->currentRow();
    if (row < 0) {
        QMessageBox::warning(this,
                             "Seleccion requerida",
                             "Seleccione un libro de la tabla.");
        return;
    }

    QTableWidgetItem *idItem = ui->tabla_eliminar->item(row, 0);
    if (!idItem) {
        QMessageBox::warning(this,
                             "Error",
                             "No se pudo obtener el ID del libro.");
        return;
    }

    bool ok;
    int id = idItem->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this,
                             "ID invalido",
                             "El ID no es valido.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmar eliminación",
                                  "¿Estas seguro de eliminar el libro?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        eliminar_Archivo(id);
    }
}
