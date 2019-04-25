#include "matrix.h"
#include <cstring>

/*matrix::matrix()
{
    ptr=NULL;

    memcpy
    memset(p_data, o , size)
}*/
template <class T>
matrix<T>::matrix(size_t col, size_t row)
{
    n_cols=col;
    n_rows=row;
    ptr=new T[n_rows];
    ptr = new T*[n_rows];
        for (int i = 0; i < n_rows; i++)
            {
                ptr[i] = new T[n_cols];
            }

}
template <class T>
matrix<T>::~matrix()
{
    for (int i = 0; i < n_rows; i++)
    {
        delete [] ptr[i];
    }
    delete [] ptr;
}
template <class T>
matrix<T>::matrix(const matrix<T>& other)
{
    n_rows=ptr.n_rows;
    n_cols=ptr.n_cols;
    ptr=new T[n_rows];
    ptr = new T*[n_rows];
        for (int i = 0; i < n_rows; i++)
            {
                ptr[i] = new T[n_cols];
            }

}
template <class T>
T&matrix<T>operator ()(size_t i, size_t j);
{
    return ptr[i][j];
}
 matrix<T>::matrix operator + (const matrix<T>, &m)
{
    n_rows=ptr.n_rows;
    n_cols=ptr.n_cols;
    ptr=new T[n_rows];
    ptr = new T*[n_rows];
        for (int i = 0; i < n_rows; i++)
            {
                ptr[i] = new T[n_cols];
            }
    for (int i = 0; i < n_rows; i++)
            {
                ptr[i] = new T[n_cols];
            }
}
/*
suma(int **pmatriz1,int**pmatriz2,int filas,int columnas)
{
    for(int i=0;i<filas;i++)
        {
            for(int j=0;j<filas;j++)
            {
                *(*(pmatriz1+i)+j)= *(*(pmatriz1+i)+j)+ *(*(pmatriz2+i)+j);
            }
        {

}

matrix::matrix(const matrix& other)
{
    //copy ctor
}
*/
