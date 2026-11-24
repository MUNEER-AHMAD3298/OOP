#ifndef _DERIVED2_
#define _DERIVED2_
#include "Base.h"
#include "Derived1.h"
class Derived2:public Derived1{
    int num2{};
    public:
    Derived2();
    Derived2(int,int,int);
    Derived2(const Derived2 & obj);
    Derived2& operator=(const Derived2& rhs);
    void setValue(int);
    void print();
    ~Derived2();
};
#endif