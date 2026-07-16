#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_btn_registrar_clicked();

    void on_btn_ver_clicked();

    void on_btn_actualizar_clicked();

    void on_btn_eliminar_clicked();

    void on_btn_registrar_registro_clicked();

    void on_btn_Recargar_ver_clicked();

    void on_btn_buscar_actualizar_clicked();

    void on_btn_actualizar_actualizar_clicked();

    void on_btn_buscar_eliminar_clicked();

    void on_btn_eliminar_eliminar_clicked();

private:
    Ui::MainWindow *ui;
    QString archivo;
    void guardar_Archivo(const QString &nombre, const QString &autor, const QString &fecha, const QString &calificacion);
    QList<QStringList> leer_Archivo();
    void tabla_Ver();
    void actualizar_Archivo(int id, const QString &nombre, const QString &autor,
                            const QString &fecha, const QString &calificacion);
    void eliminar_Archivo(int id);
    void cargar_Tabla_Eliminar(const QString &nombreBuscar = QString());
    void limpiar_Campos_Actualizar();
};
#endif // MAINWINDOW_H
