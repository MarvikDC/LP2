#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
#include "msort.h"

using namespace std;

template<class t>
class bubble: public msort<t>
{
    /*private:
        t*A;
        int n;*/
    public:
        bubble()=default;
        void somesort(t*A, int n);
        //~bubble();

};

#include"bubble.inl"
#endif
