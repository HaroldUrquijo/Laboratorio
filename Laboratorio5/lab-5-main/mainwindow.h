#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <iostream>
#include <string>
#include "sprites.h"
#include "enemigo.h"
#include <pared.h>
#include <moneda.h>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>
//#include <QDesktopWidget>
#include <QDebug>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <conio.h>
#include <QMessageBox>
#include <QScreen>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    QList<pared *> muros;
    QList<moneda *> monedas;

public slots:
    void movimiento_enemigo();

private slots:
    void on_L1_clicked();
    void on_actionAcerca_de_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;



    sprites *personaje;
    enemigo *malos;


    float x, y, ancho, alto;
    int puntajes = 0, num = 0;

    void keyPressEvent(QKeyEvent *evento);
    QTimer *timerE;
};
#endif // MAINWINDOW_H
