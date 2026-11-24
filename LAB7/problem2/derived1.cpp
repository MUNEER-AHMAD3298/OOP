#include <iostream>
using namespace std;
#include "Base.h"
#include "Derived1.h"
Derived1::Derived1(){
cout<<"Constructor of Derived1 Class"<<endl;
}
Derived1::Derived1(int _num,int _num1):Base{_num},num1{_num1}{
    cout<<"Parameterized constructor of Derived1 class"<<endl;
}
void Derived1::printderived1(){
    printbase();
    cout<<num1<<" ";
}
Derived1::~Derived1(){
cout<<"Destructor of Derived1 Class"<<endl;
}