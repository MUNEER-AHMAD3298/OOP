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
 Derived2::Derived2(const Derived2 & obj):Derived1(obj),num2{obj.num2}{
    cout<<"Copy constructor of Derived2 class"<<endl;

 }
Derived2& Derived2::operator=(const Derived2 & rhs){
    if(this!=&rhs){
     Derived1::operator=(rhs);
     num2=rhs.num2;
    }
    return *this;

}
void Derived2::setValue(int _num){
    num2=_num;
}
Derived2::~Derived2(){
cout<<"Destructor of Derived2 Class"<<endl;
}
int Derived2::getnum2()const{
    cout<<"Getter function of Derived2 class"<<endl;
    return num2;
}
ostream& operator<<(ostream & os,const Derived2 & obj){
    os<<static_cast<Derived1>(obj)<<" ";
    os<<obj.getnum2()<<endl;
    return os;
}