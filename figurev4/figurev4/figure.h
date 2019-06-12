#ifndef FIGURE_H
#define FIGURE_H
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include<QVector>


class figure
{
public:
    figure();
    virtual ~figure()=default;
    virtual void draw(QPainter *painter)=0;

protected:
    int begin_with;
    int begin_height;
};

#endif // FIGURE_H
