#include <iostream>
#include <cstdlib>
#include<ctime>
#include"matrix.h"

using namespace std;

int main()
{

    srand(time(NULL));
    matrix<int>a(3,4);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            a(i,j)=rand();
        }

    }
    matrix<int>b(2,3);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            a(i,j)=rand();
        }

    }
    matrix<int>c(a);
    matrix<int>sum=a+c;
    matrix<int>product=a*b;
    cout<<product<<endl;

    return 0;
}
