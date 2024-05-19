/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *LABEEL;
    QPushButton *browse;
    QPushButton *pushButton_2;
    QLabel *LABEL2;
    QLabel *LABEL4;
    QLabel *image;
    QLabel *LABEL3;
    QLabel *dimension;
    QLabel *occu;
    QLabel *max;
    QLabel *blobs;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 7, 43);\n"
"\n"
"border-color: rgb(0, 68, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LABEEL = new QLabel(centralwidget);
        LABEEL->setObjectName("LABEEL");
        LABEEL->setGeometry(QRect(480, 150, 111, 51));
        LABEEL->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        browse = new QPushButton(centralwidget);
        browse->setObjectName("browse");
        browse->setGeometry(QRect(380, 520, 91, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(browse->sizePolicy().hasHeightForWidth());
        browse->setSizePolicy(sizePolicy);
        browse->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(30, 188, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 30, 751, 51));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(30, 188, 255);"));
        LABEL2 = new QLabel(centralwidget);
        LABEL2->setObjectName("LABEL2");
        LABEL2->setGeometry(QRect(480, 220, 111, 51));
        LABEL2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        LABEL4 = new QLabel(centralwidget);
        LABEL4->setObjectName("LABEL4");
        LABEL4->setGeometry(QRect(480, 360, 131, 51));
        LABEL4->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setGeometry(QRect(30, 120, 431, 361));
        image->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color: rgb(10, 6, 48);"));
        LABEL3 = new QLabel(centralwidget);
        LABEL3->setObjectName("LABEL3");
        LABEL3->setGeometry(QRect(480, 290, 111, 51));
        LABEL3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        dimension = new QLabel(centralwidget);
        dimension->setObjectName("dimension");
        dimension->setGeometry(QRect(600, 150, 191, 51));
        dimension->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        occu = new QLabel(centralwidget);
        occu->setObjectName("occu");
        occu->setGeometry(QRect(600, 220, 191, 51));
        occu->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        max = new QLabel(centralwidget);
        max->setObjectName("max");
        max->setGeometry(QRect(620, 360, 191, 51));
        max->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        blobs = new QLabel(centralwidget);
        blobs->setObjectName("blobs");
        blobs->setGeometry(QRect(590, 290, 201, 51));
        blobs->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LABEEL->setText(QCoreApplication::translate("MainWindow", "Dimensions:", nullptr));
        browse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Load    Your    Image", nullptr));
        LABEL2->setText(QCoreApplication::translate("MainWindow", "Occupany %::", nullptr));
        LABEL4->setText(QCoreApplication::translate("MainWindow", "Max Blob Area: ", nullptr));
        image->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        LABEL3->setText(QCoreApplication::translate("MainWindow", "No of Blobs: ", nullptr));
        dimension->setText(QCoreApplication::translate("MainWindow", " 0 W 0 H", nullptr));
        occu->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        max->setText(QCoreApplication::translate("MainWindow", "0 W 0 H", nullptr));
        blobs->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
