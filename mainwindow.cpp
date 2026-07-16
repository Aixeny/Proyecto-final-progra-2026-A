#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    archivo="Libros.txt";
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


