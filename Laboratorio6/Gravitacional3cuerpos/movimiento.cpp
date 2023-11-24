#include "movimiento.h"
#include <iostream>

using namespace std;

double Movimiento::getPosx() const
{
    return posx;
}

double Movimiento::getPosy() const
{
    return posy;
}

double Movimiento::getMasa() const
{
    return masa;
}

double Movimiento::getVelX() const
{
    return velX;
}

double Movimiento::getVelY() const
{
    return velY;
}

void Movimiento::setAceleracion(double newAceleracion)
{
    aceleracion = newAceleracion;
}

void Movimiento::setNombre(char newNombre)
{
    nombre = newNombre;
}

char Movimiento::getNombre() const
{
    return nombre;
}

Movimiento::Movimiento()
{

}

Movimiento::Movimiento(char nombre, double x, double y, double velX, double velY, double masa, double radio)
{
    this->nombre = nombre;

    this->masa = masa;
    aceleracion = 0;
    posx = x;
    posy = y;
    this->radio = radio;
    this->velX = velX;
    this->velY = velY;
    acelX = 0;
    acelY = 0;
    setPos(posx, posy);
}

void Movimiento::calcularDistancia(QVector <Movimiento*> planetas)
{
    Distancias.clear();

    for(auto itL = planetas.begin(); itL != planetas.end(); itL++)
    {
        if((*itL)->getNombre() != nombre)
        {
            distancia = sqrt(pow((*itL)->getPosx() - posx, 2)+ pow((*itL)->getPosy() - posy, 2));

            Distancias.insert((*itL)->getNombre(), distancia);
        }
    }
}

void Movimiento::CalcularPosicion()
{
    posx += velX;
    posy += velY;
    setPos(posx, posy);
}

void Movimiento::actualizarPos(QVector <Movimiento*> planetas)
{
    for(auto itL = planetas.begin(); itL != planetas.end(); itL++)
    {
        if((*itL)->getNombre() != nombre)
        {
            Distancias.insert((*itL)->getNombre(), distancia);
        }
    }
}

void Movimiento::calcularAngulo(double posx_, double posy_)
{
    if(posx - posx_ == 0)
        angulo = atan2((posy_ - posy), (posx_ - posx));
    else
        angulo = atan2((posy_ - posy), (posx_ - posx));
}

void Movimiento::calcularAceleracion(QVector <Movimiento*> planetas)
{
    acelX = 0;
    acelY = 0;

    for(auto it = planetas.begin(); it != planetas.end(); it++)
    {
        if((*it)->getNombre() != nombre)
        {
            calcularAngulo((*it)->getPosx(), (*it)->getPosy());

            distancia = Distancias[((*it)->getNombre())];

            Calcular_Aceleraciones_Vectoriales((*it)->getMasa(), distancia);
        }
    }
}

void Movimiento::actualizarAceleracion()
{
    aceleracion += sqrt((acelX * acelX) + (acelY * acelY));
}


void Movimiento::Calcular_Aceleraciones_Vectoriales(int masa2, double r)
{
    acelX +=  masa2 / (r*r) * cos(angulo);
    acelY +=  masa2 / (r*r) * sin(angulo);
}

void Movimiento::Calcular_Velocidades_Vectoriales()
{
    velX += acelX;
    velY += acelY;
}

void Movimiento::ActualizarVelocidad_Total()
{
   velocidad = sqrt((velX*velX) + (velY*velY));

}

QRectF Movimiento::boundingRect() const
{
    return QRectF(0,0,2*radio,2*radio);
}

void Movimiento::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setBrush(Qt::magenta);
  painter->drawEllipse(boundingRect());

}
