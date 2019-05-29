#ifndef CLASS_CIRCLE_H
#define CLASS_CIRCLE_H

#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "class_figure.h"
#include "mainwindow.h"

class class_circle:  public MainWindow//, public class_figure
{
public:
    class_circle();
    void draw(class_circle* ptr_obj);
private:
    int p_with;
    int p_height;
    int radius;
    QPainter * painter;
	QPixmap * pixmap;
	QPen * pen;
};

#endif // CLASS_CIRCLE_H
