#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>
 template<class T>

class matrix
{
    private:
        T **ptr;
        size_t n_cols, n_rows;
    public:
        //matrix();
        matrix(size_t col=0, size_t row=0);
        ~matrix();
        matrix(const matrix& other);
        T&operator()(size_t i=0, size_t j=0);
        matrix<T> operator + (const matrix<T>, &m);
        //matrix &operator + (const matrix &m1, const matrix &m2);



};
#include"matrix.inl"
#endif // MATRIX_H
