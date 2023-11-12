#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class enemigo: public QObject, public QGraphicsItem
{
public:
    explicit enemigo(QObject *parent = nullptr);

    QTimer * timer;
    QPixmap * pixmap;

    float filas, columnas;
    float ancho, alto;
    float posicion;

    int posx = 0 ,posy = 0;
    int velocidad = 6;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void up();
    void down();
    void left();
    void right();

signals:

public slots:
    void actualizacion();
};
#endif // ENEMIGO_H
