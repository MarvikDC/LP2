#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include<assert.h>
using namespace std;
template<class T>

class matrix
{
    private:
    public:
        T *data; //puntero a inicio d el acadena
        size_t n_cols, n_rows; //columnas por filas (size_t e sel typedef de unsigned long long

    public:
        matrix(size_t col=0, size_t row=0);//constructor por defecto
        ~matrix();//destructor
        matrix(const matrix& other);//constructor copia
        T&operator()(size_t i=0, size_t j=0);
        matrix<T> operator + (const matrix<T> &other);
        matrix<T> operator * (const matrix<T> &other);
        friend ostream &operator << (ostream &output, const matrix<T> &_matrix);
        friend istream &operator >> (istream &input, matrix<T> &_matrix);


};
#include"matrix.inl"
#endif // MATRIX_H
