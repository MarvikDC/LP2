#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"circle.h"
#include"square.h"
#include"figure.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pen = new QPen(QColor("black"));
    pixmap = new QPixmap(400,400);
    pixmap->fill();
    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pen;
    delete pixmap;
    delete painter;
    int large=list.size();
    for(int i=0;i<large;i++)
        delete[] list[i];
}
/*void MainWindow::add()
{
    list.push_back();
}
*/
void MainWindow::on_Circle_clicked()
{
    list.push_back(new circle);
}

void MainWindow::on_Draw_clicked()
{
    pixmap->fill();
    int large=list.size();
    for(int i=0;i<large;i++)
        list[i]->draw(painter);
   ui->label->setPixmap(*pixmap);
}

void MainWindow::on_Square_clicked()
{
    list.push_back(new square);
}
