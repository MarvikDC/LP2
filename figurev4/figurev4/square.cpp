#include "square.h"
#include"mainwindow.h"

square::square(int side_)
{
    side_=rand()%100+1;
    side=side_;
}
void square::draw(QPainter * painter)
{
    painter->drawRect(begin_with,begin_height,side,side);
}
