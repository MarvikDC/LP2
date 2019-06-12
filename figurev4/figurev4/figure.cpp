#include "figure.h"
//#include<random>
#include<QMainWindow>

figure::figure()
{
    begin_with=1+rand()%300+1-1;
    begin_height=1+rand()%300+1-1;
   // pixmap = new QPixmap(400,400);
   // pixmap->fill();
   // painter = new QPainter();

}
