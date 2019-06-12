#ifndef SELECTION_H
#define SELECTION_H
#include<iostream>
#include "msort.h"
template <class t>
class selection: public msort<t>
{
    /*private:
        t*A;
        int n;*/
    public:
        selection()=default;
        void somesort(t*A, int n);
        //~selection();

};






#include"selection.inl"
#endif
