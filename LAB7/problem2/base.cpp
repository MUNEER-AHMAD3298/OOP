
#include <iostream>
using namespace std;
#include "Base.h"
Base::Base(){
cout<<"Constructor of Base Class"<<endl;
}
Base::Base(int _num): num{_num}{
    cout<<"Parametized constructor of Base class"<<endl;  
}
void Base::printbase(){
    cout<<num<<" ";
}
Base::~Base(){
cout<<"Destructor of Base Class"<<endl;
}