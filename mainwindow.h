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

private:
    Ui::MainWindow *ui;
    QString archivo;
    void guardar_Archivo(const QString &nombre, const QString &autor, const QString &fecha, const QString &calificacion);
    QList<QStringList> leer_Archivo();
    void tabla_Ver();
};
#endif // MAINWINDOW_H
