#include <iostream>
using namespace std;
#include "darray.h"
 void DArray::push_back(int num){  
    if(size==capacity)
    {
        capacity = capacity * 2;
        int* temp=new int [capacity];
        for(int i{0};i<size;i++){
            temp[i]=iptr[i];
        }
        delete [] iptr;
    
        iptr=temp;
  
    }
       iptr[size]=num;
       size++;
 

 }
 int DArray::getsize()const{
    return size;
 }
 int DArray::getcapacity()const{
    return capacity;
}
DArray::DArray(){
   iptr=new int [1];
   size=0;
   capacity=1;
}
 DArray& DArray::operator=(const DArray & obj){
   if(this!=&obj){
      delete [] iptr;
     size=obj.getsize();
     capacity=obj.getcapacity();
     iptr=new int[capacity];
     for(int i{};i<size;i++)
     {
     iptr[i]=obj[i];
     }
    
   }
    return *this;
   
 }
 int DArray::operator[](int num)const
 {
   return iptr[num];
 }
 DArray::~DArray(){
   delete [] iptr;
 }
 ostream& operator<<(ostream& os,const DArray& rhs){
   int _size=rhs.getsize();
   for(int i{};i<_size;i++)
   os<<rhs[i]<<" ";

   return os;
 }