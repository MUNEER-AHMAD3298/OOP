#ifndef _BASE_
#define _BASE_
#include <iostream>
using namespace std;
class Base{
    int num{};
    public:
    Base();
    Base(int);
    Base(const Base & obj);
    Base& operator=(const Base & obj);
    void printbase();
    int getnum()const;
    ~Base();

};
ostream& operator<<(ostream & os,const Base & obj);
#endif