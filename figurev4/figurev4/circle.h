#ifndef CIRCLE_H
#define CIRCLE_H

#include <QMainWindow>
#include"figure.h"

class circle: public figure
{
    public:
        circle(int radius_=0);
        void draw(QPainter *painter);
        ~circle(){}
    protected:
        int radius;
};

#endif // CIRCLE_H
