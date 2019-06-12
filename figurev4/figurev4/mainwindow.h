#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"figure.h"
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include<QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //void add();


private slots:
    void on_Circle_clicked();

    void on_Draw_clicked();

    void on_Square_clicked();

private:
    Ui::MainWindow *ui;
    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;
    QVector<figure*>list;
};

#endif // MAINWINDOW_H
