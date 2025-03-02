#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void startGame();
    void stopGame();
    void switchPlayer1();
    void switchPlayer2();
    void updateTime();

    void setTwoMin();
    void setFiveMin();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int player1Time;
    int player2Time;
    int currentPlayer; // 1 or 2
    int totalGameTime;
    bool gameRunning;

    void updateProgressBars();
    void checkGameEnd();
    void resetGame();
};

#endif // MAINWINDOW_H
