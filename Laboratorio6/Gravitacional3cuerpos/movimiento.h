#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H
#include <QGraphicsItem>
#include <QPainter>
#include <math.h>
#include <QMap>
#include <iostream>
#include <QVector>

using namespace std;

class Movimiento: public QGraphicsItem
{
    // Atributos
    char nombre;
    double posx, posy;
    double velocidad;
    double angulo;
    double acelX, acelY;
    int masa;
    QMap<char, double> Distancias;
    double distancia;
    double velX, velX0;
    double velY, velY0;
    double aceleracion;
    double radio;

public:
    Movimiento();
    Movimiento(char, double x, double y, double velx, double vely, double masa, double radio);

    void calcularDistancia(QVector <Movimiento*> planetas);
    void CalcularPosicion();
    void actualizarPos(QVector <Movimiento*> planetas);
    void calcularAngulo(double posx_, double posy_);
    void calcularAceleracion(QVector <Movimiento*> planetas);
    void actualizarAceleracion();
    void Calcular_Aceleraciones_Vectoriales(int masa2, double r_);
    void Calcular_Velocidades_Vectoriales();
    void ActualizarVelocidad_Total();

    double getPosx() const;
    double getPosy() const;
    double getMasa() const;
    double getVelX() const;
    double getVelY() const;
    void setAceleracion(double newAceleracion);
    void setNombre(char newNombre);
    char getNombre() const;
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // MOVIMIENTO_H
