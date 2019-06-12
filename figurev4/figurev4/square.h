#ifndef SQUARE_H
#define SQUARE_H

#include <QMainWindow>
#include"figure.h"

class square: public figure
{
public:
    square(int side_=0);
    void draw(QPainter *painter);
    ~square()=default;
protected:
    int side;
};

#endif // SQUARE_H
