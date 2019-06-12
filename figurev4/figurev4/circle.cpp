#include "circle.h"
#include"mainwindow.h"
//#include<QPainter>
//#include<QPixmap>

circle::circle(int radius_)
{
    radius_=rand()%100+1;
    radius=radius_;
}

void circle::draw(QPainter *painter)
{
    painter->drawEllipse(begin_with,begin_height,radius,radius);
}

