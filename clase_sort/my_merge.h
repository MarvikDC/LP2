#ifndef MY_MERGE_H
#define MY_MERGE_H
#include <iostream>
#include "msort.h"

using namespace std;

template<class t>
class my_merge: public msort<t>
{
    /*private:
        t*A;
        int n;*/
    public:
        my_merge()=default;
        void somesort(t*A, int n);
        void merge_(t *A, int i, int m, int j);
        void merge_sort(t *A, int i, int j);


};

#include"my_merge.inl"
#endif

