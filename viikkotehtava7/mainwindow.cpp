#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connecting buttons to slots
    connect(ui->Sum, &QPushButton::clicked, this, &MainWindow::on_sumButton_clicked);
    connect(ui->Subtract, &QPushButton::clicked, this, &MainWindow::on_subtractButton_clicked);
    connect(ui->Multiplication, &QPushButton::clicked, this, &MainWindow::on_multiplicationButton_clicked);
    connect(ui->Fraction, &QPushButton::clicked, this, &MainWindow::on_fractionButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sumButton_clicked()
{
    double num1 = ui->Number1->text().toDouble();
    double num2 = ui->Number2->text().toDouble();
    double result = num1 + num2;
    ui->Result->setText(QString::number(result));
}

void MainWindow::on_subtractButton_clicked()
{
    double num1 = ui->Number1->text().toDouble();
    double num2 = ui->Number2->text().toDouble();
    double result = num1 - num2;
    ui->Result->setText(QString::number(result));
}

void MainWindow::on_multiplicationButton_clicked()
{
    double num1 = ui->Number1->text().toDouble();
    double num2 = ui->Number2->text().toDouble();
    double result = num1 * num2;
    ui->Result->setText(QString::number(result));
}

void MainWindow::on_fractionButton_clicked()
{
    double num1 = ui->Number1->text().toDouble();
    double num2 = ui->Number2->text().toDouble();

    if (num2 != 0) {
        double result = num1 / num2;
        ui->Result->setText(QString::number(result));
    } else {
        ui->Result->setText("Error");
    }
}
