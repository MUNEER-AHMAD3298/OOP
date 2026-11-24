
#include <iostream>
using namespace std;
#include "Base.h"
Base::Base(){
cout<<"Constructor of Base Class"<<endl;
}
Base::Base(int _num): num{_num}{
    cout<<"Parametized constructor of Base class"<<endl;  
}
Base::Base(const Base & obj):num(obj.num){
cout<<"Copy Constructor of Base Class"<<endl;
}
Base& Base::operator=(const Base & rhs){
    cout<<"Assignment Operator of Base Class"<<endl;
 if(this!=&rhs){
    num=rhs.num;
 }
 return *this;
}
void Base::printbase(){
    cout<<num<<" ";
}
Base::~Base(){
cout<<"Destructor of Base Class"<<endl;
}
int Base::getnum()const{
    cout<<"Getter function of Base class"<<endl;
    return num;

}
ostream& operator<<(ostream & os,const Base & obj){
    os<<obj.getnum()<<" ";
    return os;

}