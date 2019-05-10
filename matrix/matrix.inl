#include"matrix.h"
#include <stdlib.h>
#include<assert.h>
using namespace std;

template <class T>
matrix<T>::matrix(size_t col, size_t row)
{
    //assert(col>)
    n_cols=col;
    n_rows=row;
    if(col==0||row==0)
    {
        data=NULL;
    }
    else
    {
        data=new T[n_cols*n_rows];
    }
}
template <class T>
matrix<T>::~matrix()
{
    delete [] data;
}
template <class T>
matrix<T>::matrix(const matrix& other)
{
    n_rows=other.n_rows;
    n_cols=other.n_cols;
    data=new T[n_cols*n_rows];
    for(int i=0;i<n_cols*n_rows;i++)
        data[i]=other.data[i];
}
template <class T>
T &matrix<T>::operator()(size_t i, size_t j)
{
    //assert(i<n_rows && j<n_cols);
    return data[j*n_rows+i];
}
template <class T>
matrix<T> matrix<T>::operator +(const matrix<T> &other)
{
    assert(n_rows==other.n_rows&&n_cols==other.n_cols);
    matrix<T> sum;
    sum.n_rows=n_rows;
    sum.n_cols=n_cols;
    sum.data=new T [sum.n_cols*sum.n_rows];
    for(int i=0;i<sum.n_cols*sum.n_rows;i++)
    {
        sum.data[i]=data[i]+other.data[i];
    }
    return sum;
}
template <class T>
matrix<T> matrix<T>::operator *(const matrix<T> &other)
{
    assert(n_cols == other.n_rows);
    matrix<T> product(n_rows, other.n_cols);
    T aux = 0;
    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_cols; j++)
        {
            for(int k = 0; k < n_cols; k++)
            {
                aux += data[k*n_rows+i] * other.data[j*n_rows+k];
            }
            product.data[i*n_rows+j]=aux;
            aux = 0;
        }
    }

    return product;
}
template <class T>
ostream &operator << (ostream &output, matrix<T> &_matrix)
{
    output << "\n";
    for(int i = 0; i< _matrix.n_cols; ++i)
    {
        output << " ";
        for(int j = 0; j < _matrix.n_rows; j++)
        {
            output << _matrix(i,j) << " ";
        }
        output <<"\n";
    }
    return output;
}
template <class T>
istream &operator >> (istream &input, matrix<T> &_matrix)
{
    for(int i=0;i<_matrix.n_cols*_matrix.n_rows;i++)
    {
        input>>_matrix.data[i];
    }
}


