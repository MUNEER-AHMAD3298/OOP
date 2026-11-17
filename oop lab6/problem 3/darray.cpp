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
 int DArray::Size()const{
    return size;
 }
 int DArray::Capacity()const{
    return capacity;
}
DArray::DArray(){
   iptr=new int [1];
   size=0;
   capacity=1;
}
 DArray::DArray(const DArray& rhs){
     size=rhs.Size();
     capacity=rhs.Capacity();
     iptr=new int[capacity];
     for(int i{};i<size;i++)
     {
     iptr[i]=rhs[i];
     }
 }
 int& DArray::operator[](int num)const
 {
   return iptr[num];
 }

  bool DArray::operator==(const DArray& rhs){
    if(size<rhs.Size()||size>rhs.Size())
    return false;
    else{
      for(int i{};i<size;i++)
      {
        if(iptr[i]!=rhs[i])
        return false;
      }
      return true;
    }


  }

 DArray::~DArray(){
   delete [] iptr;
 }
  int DArray::operator+=(int num){
    return num + iptr[num];
  }
 ostream& operator<<(ostream& os,const DArray& rhs){
   int _size=rhs.Size();
   for(int i{};i<_size;i++)
   os<<rhs[i]<<" ";

   return os;
 }