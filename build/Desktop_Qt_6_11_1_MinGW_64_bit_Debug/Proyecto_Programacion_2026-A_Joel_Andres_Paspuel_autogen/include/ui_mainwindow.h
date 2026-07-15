/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *page_Registrar;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QWidget *page_Actualizar;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QWidget *page_Ver;
    QTableWidget *tabla_libros;
    QLabel *label_6;
    QPushButton *btn_Recargar;
    QWidget *page_Eliminar;
    QPushButton *pushButton_9;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QLabel *label_20;
    QPushButton *pushButton_10;
    QTableWidget *tabla_libros_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1109, 613);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 1131, 91));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 255, 252);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, 90, 481, 481));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 20, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Kristen ITC")});
        font.setPointSize(24);
        label_4->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 190, 241, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 350, 241, 51));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(100, 430, 241, 51));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 270, 241, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 110, 371, 51));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(460, 90, 651, 481));
        page_Registrar = new QWidget();
        page_Registrar->setObjectName("page_Registrar");
        label_7 = new QLabel(page_Registrar);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 20, 351, 51));
        label_7->setFont(font);
        pushButton_6 = new QPushButton(page_Registrar);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(360, 370, 241, 51));
        label_8 = new QLabel(page_Registrar);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 100, 191, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Kristen ITC")});
        font1.setPointSize(12);
        label_8->setFont(font1);
        label_9 = new QLabel(page_Registrar);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 160, 191, 51));
        label_9->setFont(font1);
        label_10 = new QLabel(page_Registrar);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 220, 291, 51));
        label_10->setFont(font1);
        label_11 = new QLabel(page_Registrar);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 280, 191, 51));
        label_11->setFont(font1);
        lineEdit = new QLineEdit(page_Registrar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(330, 110, 271, 41));
        lineEdit_2 = new QLineEdit(page_Registrar);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(330, 170, 271, 41));
        lineEdit_3 = new QLineEdit(page_Registrar);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(330, 230, 271, 41));
        lineEdit_4 = new QLineEdit(page_Registrar);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(330, 290, 271, 41));
        stackedWidget->addWidget(page_Registrar);
        page_Actualizar = new QWidget();
        page_Actualizar->setObjectName("page_Actualizar");
        label_12 = new QLabel(page_Actualizar);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(160, 20, 351, 51));
        label_12->setFont(font);
        label_13 = new QLabel(page_Actualizar);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 80, 171, 41));
        label_13->setFont(font1);
        lineEdit_5 = new QLineEdit(page_Actualizar);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(190, 80, 281, 41));
        pushButton_7 = new QPushButton(page_Actualizar);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(480, 80, 151, 41));
        pushButton_8 = new QPushButton(page_Actualizar);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(480, 410, 151, 41));
        lineEdit_6 = new QLineEdit(page_Actualizar);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(360, 140, 271, 41));
        lineEdit_7 = new QLineEdit(page_Actualizar);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(360, 190, 271, 41));
        lineEdit_8 = new QLineEdit(page_Actualizar);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(360, 240, 271, 41));
        lineEdit_9 = new QLineEdit(page_Actualizar);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(360, 290, 271, 41));
        lineEdit_10 = new QLineEdit(page_Actualizar);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(360, 350, 271, 41));
        label_14 = new QLabel(page_Actualizar);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 290, 291, 51));
        label_14->setFont(font1);
        label_15 = new QLabel(page_Actualizar);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 350, 291, 51));
        label_15->setFont(font1);
        label_16 = new QLabel(page_Actualizar);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 240, 291, 51));
        label_16->setFont(font1);
        label_17 = new QLabel(page_Actualizar);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(50, 190, 291, 51));
        label_17->setFont(font1);
        label_18 = new QLabel(page_Actualizar);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(50, 140, 291, 51));
        label_18->setFont(font1);
        stackedWidget->addWidget(page_Actualizar);
        page_Ver = new QWidget();
        page_Ver->setObjectName("page_Ver");
        tabla_libros = new QTableWidget(page_Ver);
        if (tabla_libros->columnCount() < 5)
            tabla_libros->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_libros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_libros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_libros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla_libros->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla_libros->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tabla_libros->setObjectName("tabla_libros");
        tabla_libros->setGeometry(QRect(10, 70, 631, 341));
        label_6 = new QLabel(page_Ver);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 10, 381, 51));
        label_6->setFont(font);
        btn_Recargar = new QPushButton(page_Ver);
        btn_Recargar->setObjectName("btn_Recargar");
        btn_Recargar->setGeometry(QRect(390, 420, 241, 51));
        stackedWidget->addWidget(page_Ver);
        page_Eliminar = new QWidget();
        page_Eliminar->setObjectName("page_Eliminar");
        pushButton_9 = new QPushButton(page_Eliminar);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(490, 70, 151, 41));
        label_19 = new QLabel(page_Eliminar);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(190, 10, 271, 51));
        label_19->setFont(font);
        lineEdit_11 = new QLineEdit(page_Eliminar);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(200, 70, 281, 41));
        label_20 = new QLabel(page_Eliminar);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 70, 171, 41));
        label_20->setFont(font1);
        pushButton_10 = new QPushButton(page_Eliminar);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(490, 420, 151, 41));
        tabla_libros_2 = new QTableWidget(page_Eliminar);
        if (tabla_libros_2->columnCount() < 5)
            tabla_libros_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla_libros_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabla_libros_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabla_libros_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabla_libros_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabla_libros_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tabla_libros_2->setObjectName("tabla_libros_2");
        tabla_libros_2->setGeometry(QRect(10, 120, 631, 291));
        stackedWidget->addWidget(page_Eliminar);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1109, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Biblioteca virtual ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Registrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Ver", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Menu de opciones</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Registro de libros", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Registrar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Nombre: ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Fecha de lectura finalizada: ", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Puntuacion: ", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Actualizar libros", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nombre del libro: ", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Fecha de lectura finalizada: ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Puntuacion:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabla_libros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_libros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nombre: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_libros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Autor: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabla_libros->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Fin de lectura: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabla_libros->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Puntuacion: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Libros Registrados", nullptr));
        btn_Recargar->setText(QCoreApplication::translate("MainWindow", "Recargar", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Eliminar libro", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Nombre del libro: ", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabla_libros_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "ID: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabla_libros_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Nombre: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabla_libros_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Autor: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabla_libros_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Fin de lectura: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabla_libros_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Puntuacion: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
