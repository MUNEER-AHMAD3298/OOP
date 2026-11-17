#ifndef _DARRAY_
#define _DARRAY_
class DArray{
    int *iptr{};
    int size{0};
    int capacity{0};
    public:
    DArray();
    void push_back(int);
    DArray& operator=(const DArray & obj);
    int getsize()const;
    int getcapacity()const;
    int operator[](int)const;
    ~DArray();
};
ostream& operator<<(ostream &os,const DArray &rhs);
#endif
