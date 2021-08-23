#include<iostream>
#include "A1rectangle.h"
using namespace std;

int main()
{
  Employee rec1;
  Employee rec2(10, 5);

  cout<<"Rectangle 1: "<<endl;
  cout<<"Length = "<<rec1.getLength()<<endl;
  cout<<"Width = "<<rec1.getWidth()<<endl<<endl;

  cout<<"Rectangle 2: "<<endl;
  cout<<"Length = "<<rec2.getLength<<endl;
  cout<<"Width = "<<rec2.getWidth<<endl;
}
