/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *Number1;
    QLineEdit *Number2;
    QLineEdit *Result;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPushButton *Sum;
    QPushButton *Subtract;
    QPushButton *Multiplication;
    QPushButton *Fraction;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Number1 = new QLineEdit(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(50, 70, 113, 20));
        Number2 = new QLineEdit(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(170, 70, 113, 20));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(300, 70, 113, 20));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(50, 40, 111, 21));
        plainTextEdit_2 = new QPlainTextEdit(centralwidget);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(170, 40, 111, 21));
        plainTextEdit_3 = new QPlainTextEdit(centralwidget);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(300, 40, 111, 21));
        Sum = new QPushButton(centralwidget);
        Sum->setObjectName("Sum");
        Sum->setGeometry(QRect(50, 110, 80, 18));
        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        Subtract->setGeometry(QRect(140, 110, 80, 18));
        Multiplication = new QPushButton(centralwidget);
        Multiplication->setObjectName("Multiplication");
        Multiplication->setGeometry(QRect(230, 110, 80, 18));
        Fraction = new QPushButton(centralwidget);
        Fraction->setObjectName("Fraction");
        Fraction->setGeometry(QRect(320, 110, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 17));
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
        Number1->setText(QCoreApplication::translate("MainWindow", "Enter Number1", nullptr));
        Number2->setText(QCoreApplication::translate("MainWindow", "Enter Number2", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "Final Result", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        Sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Fraction->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
