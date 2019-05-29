#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include<QVector>
#include"class_figure.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, class_figure
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);  //default
    ~MainWindow();                                  //default

    virtual void draw(QPainter* painter);
private slots:
    void on_push_draw_clicked();
    
private:
    Ui::MainWindow *ui;                              //default
    QPainter * painter;
	QPixmap * pixmap;
	QPen * pen;
    QVector<QPainter*>list;
};

#endif // MAINWINDOW_H
