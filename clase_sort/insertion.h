#ifndef INSERTION_H
#define INSERTION_H
#include <iostream>
#include "msort.h"

using namespace std;

template<class t>
class insertion: public msort<t>
{
    /*private:
        t*A;
        int n;*/
    public:
        insertion()=default;
        void somesort(t*A, int n);


};

#include"insertion.inl"
#endif
