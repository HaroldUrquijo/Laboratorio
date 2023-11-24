#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,900,600);
    timer= new QTimer();
    connect(timer, SIGNAL(timeout()), this,SLOT(ActualizarPosicion()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_bntSimular_clicked()
{   cuerpo.push_back(new Movimiento('A', 0, -70, 2, 0, 70, 12));
    cuerpo.push_back(new Movimiento('B', 0, 0, 0, 0, 7000,30));
    cuerpo.push_back(new Movimiento('C', 400, 500, -1.6, 1.2, 25,10));

    scene->addItem(cuerpo[0]);
    scene->addItem(cuerpo[1]);
    scene->addItem(cuerpo[2]);

     timer->start(100);

}
void MainWindow::ActualizarPosicion()
{   for(int i=0; i<3 ; i++){
    cuerpo[i]->calcularDistancia(cuerpo);
    cuerpo[i]->calcularAceleracion(cuerpo);
    cuerpo[i]->Calcular_Velocidades_Vectoriales();
    cuerpo[i]->ActualizarVelocidad_Total();
    cuerpo[i]->CalcularPosicion();
    }
    if(1>2)
      timer->stop();
}


