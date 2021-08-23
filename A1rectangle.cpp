#include<iostream>
#include "A1rectangle.h"

Rectangle::Rectangle()
{
  lenght = 0;
  width = 0;
}
Rectangle::Rectangle(int wd, int len)
{
  length = len;
  width = wd;
}
Rectangle::~Rectangle()
{
  cout<<"Deleted Length: "<<length<<" Deleted width: "<< width<<endl; 
}