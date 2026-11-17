#ifndef _DARRAY_
#define _DARRAY_
class DArray{
    int *iptr{};
    int size{0};
    int capacity{0};
    public:
    DArray();
    void push_back(int);
    int Size()const;
    int Capacity()const;
    int& operator[](int)const;
    int operator+=(int);
    ~DArray();
};
ostream& operator<<(ostream &os,const DArray &rhs);
#endif
