#include "enemigo.h"

enemigo::enemigo(QObject *parent) : QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;

    ancho = 40;
    alto = 40;

    posicion = 0;


    pixmap = new QPixmap(":/imagenes/enemigo.png");

    timer->start(70);
    connect(timer, &QTimer::timeout, this, &enemigo::actualizacion);
}


void enemigo::actualizacion()
{
    columnas += 40;
    if(columnas >= 80){
        columnas = 0;
    }
    this->update(-ancho/2, -alto/2, ancho, alto);
}


QRectF enemigo::boundingRect() const
{
    return QRectF(-ancho/2, -alto/2, ancho, alto);
}

void enemigo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2, -alto/2, *pixmap, columnas, posicion, ancho, alto);
}

void enemigo::up()
{
    posy -= 6;
    posicion = 80;
    setPos(posx, posy);
}

void enemigo::down()
{
    posy += 6;
    posicion = 120;
    setPos(posx, posy);
}

void enemigo::left()
{
    posx -= 6;
    posicion = 40;
    setPos(posx, posy);
}

void enemigo::right()
{
    posx += 6;
    posicion = 0;
    setPos(posx, posy);
}
