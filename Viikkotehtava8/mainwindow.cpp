#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer(this))
    , player1Time(0)
    , player2Time(0)
    , currentPlayer(1)
    , totalGameTime(0)
    , gameRunning(false)
{
    ui->setupUi(this);

    ui->label->setText("Select playtime and press start the game");

    connect(ui->StartGame, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->StopGame, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->SwitchPlayer1, &QPushButton::clicked, this, &MainWindow::switchPlayer1);
    connect(ui->SwitchPlayer2, &QPushButton::clicked, this, &MainWindow::switchPlayer2);
    connect(ui->twoMin, &QPushButton::clicked, this, &MainWindow::setTwoMin);
    connect(ui->fiveMin, &QPushButton::clicked, this, &MainWindow::setFiveMin);

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setTwoMin() {
    totalGameTime = 120;
    ui->label->setText("Ready to play");
}

void MainWindow::setFiveMin() {
    totalGameTime = 300;
    ui->label->setText("Ready to play");
}

void MainWindow::startGame() {
    if (totalGameTime == 0) {
        ui->label->setText("Select playtime and press start the game");
        return;
    }

    player1Time = totalGameTime;
    player2Time = totalGameTime;
    gameRunning = true;
    currentPlayer = 1;

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
    ui->label->setText("Game ongoing");

    timer->start(1000);
}

void MainWindow::stopGame() {
    timer->stop();
    gameRunning = false;
    ui->label->setText("Select playtime and press start the game");
}

void MainWindow::switchPlayer1() {
    if (!gameRunning) return;
    currentPlayer = 1;
}

void MainWindow::switchPlayer2() {
    if (!gameRunning) return;
    currentPlayer = 2;
}

void MainWindow::updateTime() {
    if (!gameRunning) return;

    if (currentPlayer == 1) {
        player1Time--;
    } else {
        player2Time--;
    }

    updateProgressBars();
    checkGameEnd();
}

void MainWindow::updateProgressBars() {
    int p1Percentage = (player1Time * 100) / totalGameTime;
    int p2Percentage = (player2Time * 100) / totalGameTime;

    ui->progressBar1->setValue(p1Percentage);
    ui->progressBar2->setValue(p2Percentage);
}

void MainWindow::checkGameEnd() {
    if (player1Time <= 0) {
        ui->label->setText("Player 2 WON");
        stopGame();
    } else if (player2Time <= 0) {
        ui->label->setText("Player 1 WON");
        stopGame();
    }
}

void MainWindow::resetGame() {
    totalGameTime = 0;
    player1Time = 0;
    player2Time = 0;
    gameRunning = false;
    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
    ui->label->setText("New game via start button.");
}
