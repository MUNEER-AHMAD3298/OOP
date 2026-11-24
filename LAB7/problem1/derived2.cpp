#include <iostream>
using namespace std;
#include "Base.h"
#include "Derived1.h"
#include "Derived2.h"
Derived2::Derived2(){
cout<<"Constructor of Derived2 Class"<<endl;
}
Derived2::~Derived2(){
cout<<"Destructor of Derived2 Class"<<endl;
}