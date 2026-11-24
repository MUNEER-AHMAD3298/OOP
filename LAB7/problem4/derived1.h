#ifndef _DERIVED1_
#define _DERIVED1_
#include "Base.h"
#include <iostream>
using namespace std;
class Derived1:public Base{
    int num1{};
    public:
    Derived1();
    Derived1(int,int);
    Derived1(const Derived1 & obj);
    Derived1& operator=(const Derived1& rhs);
    void printderived1();
     int getnum1()const;
    ~Derived1();
};
ostream& operator<<(ostream & os,const Derived1 & obj);
#endif