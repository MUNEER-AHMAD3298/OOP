#ifndef _DERIVED2_
#define _DERIVED2_
#include "Base.h"
#include "Derived1.h"
class Derived2:public Derived1{
    int num2{};
    public:
    Derived2();
    Derived2(int,int,int);
    void print();
    ~Derived2();
};
#endif