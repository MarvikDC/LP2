#include<iostream>
using namespace std;

class my_string
{
    private:
        //complete
        int _size;
        char*A;

    public:
        my_string(const char*str=NULL);
        my_string(const my_string &str);
        ~my_string();
        my_string &operator=(const my_string &str);
        my_string &operator +(const my_string &str);
        bool operator ==(const my_string &str);
        bool operator <(const my_string &str);
        bool operator >(const my_string &str);
        char &operator[](const int &i);
        //operador out y int


};
//crear archivos my_string.h y  my_string.cpp   y test_my_string.cpp
//-------------------------
my_string::my_string(const char *str)
{
    int i = 0;
    const char * t = str; //fija la direcion de inicio del puntero original

    while(*str++) //para medir el tamaño de la cadena, suma i hasta que la cadena se acaba->queda en NULL
    {
        i++;
    }

    A = new char[i];  //crea el mystrig del tamaño calculado
    int j = 0;

    for(j;*t;t++,j++) //copio uno a uno los valores del original al calculado
    {
        A[j] = *t;
    }
    _size = j+1; //j es del tamaño del nuevo mystring, para incluir el nulo sumo +1
//------------------------
my_string::my_string(const my_string&s)
{
    _size = s._size;
    A = new char[_size];
    for(int i = 0; i < _size; i++){
        A[i] = s.A[i];
    }
}
//---------------------------
int main()
{
                //str"cadena"
    std::string str="hola";
    std::string a,b,c;
    a=str+str;
    b=a;
    c=a+b;
    c="";
    a[1]='H';
    return 0;

}
