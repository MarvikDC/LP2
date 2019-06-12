#ifndef MSORT_H
#define MSORT_H
template<class t>

class msort
{
    public:
        virtual void somesort(t*A, int n)=0;
        virtual ~msort()=default;

};

#endif
