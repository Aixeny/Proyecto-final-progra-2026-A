#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

}

