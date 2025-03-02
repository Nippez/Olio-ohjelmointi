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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SwitchPlayer1;
    QPushButton *SwitchPlayer2;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QLabel *label;
    QPushButton *twoMin;
    QPushButton *fiveMin;
    QPushButton *StartGame;
    QPushButton *StopGame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SwitchPlayer1 = new QPushButton(centralwidget);
        SwitchPlayer1->setObjectName("SwitchPlayer1");
        SwitchPlayer1->setGeometry(QRect(40, 60, 101, 31));
        SwitchPlayer2 = new QPushButton(centralwidget);
        SwitchPlayer2->setObjectName("SwitchPlayer2");
        SwitchPlayer2->setGeometry(QRect(220, 60, 101, 31));
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(30, 30, 118, 23));
        progressBar1->setValue(24);
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(210, 30, 118, 23));
        progressBar2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 291, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        twoMin = new QPushButton(centralwidget);
        twoMin->setObjectName("twoMin");
        twoMin->setGeometry(QRect(90, 150, 80, 18));
        fiveMin = new QPushButton(centralwidget);
        fiveMin->setObjectName("fiveMin");
        fiveMin->setGeometry(QRect(200, 150, 80, 18));
        StartGame = new QPushButton(centralwidget);
        StartGame->setObjectName("StartGame");
        StartGame->setGeometry(QRect(90, 200, 80, 18));
        StopGame = new QPushButton(centralwidget);
        StopGame->setObjectName("StopGame");
        StopGame->setGeometry(QRect(200, 200, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
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
        SwitchPlayer1->setText(QCoreApplication::translate("MainWindow", "Switch player 1", nullptr));
        SwitchPlayer2->setText(QCoreApplication::translate("MainWindow", "Switch player 2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start the game", nullptr));
        twoMin->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        fiveMin->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        StartGame->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        StopGame->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
