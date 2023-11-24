#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <movimiento.h>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QVector>
#include <QTimer>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bntSimular_clicked();
    void ActualizarPosicion();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QVector<Movimiento*> cuerpo;
    QTimer *timer;

};
#endif // MAINWINDOW_H
