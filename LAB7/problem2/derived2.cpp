#include <iostream>
using namespace std;
#include "Base.h"
#include "Derived1.h"
#include "Derived2.h"
Derived2::Derived2(){
cout<<"Constructor of Derived2 Class"<<endl;
}
Derived2::Derived2(int _num,int _num1,int _num2):Derived1(_num,_num1),
    num2{_num2}{
    cout<<"Parameterized constructor of Derived2 class"<<endl;
}
void Derived2::print(){
     printderived1();
    cout<<num2<<" "<<endl;
}
Derived2::~Derived2(){
cout<<"Destructor of Derived2 Class"<<endl;
}