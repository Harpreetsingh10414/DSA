#include<iostream>
using namespace std;

struct rectangle
{
  int length;
  int breadth;
};

int main()
{
  rectangle r={10,5};
  cout<<r.length<<endl;   //variable to show value
  cout<<r.breadth<<endl;

  rectangle *p=&r;
  p->length=12;
  p->breadth=11;
  cout<<"\n";
  cout<<p->length<<endl;  //pointer to show value
  cout<<p->breadth<<endl;

  cout<<"\nAfter chedkhani with value using pointer lenght and breadth is -";
  cout<<r.length<<endl;
  cout<<r.breadth<<endl;

  return 0;
}
