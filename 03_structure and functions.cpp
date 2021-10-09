// ----------- NOT COMPLETED -----------

#include<iostream>
using namespace std;

struct rectangle
{
  int length;
  int breadth;
};

void initialize(struct rectangle *r)
{
  int l,b;
  r->length=l;
  r->breadth=b;
}

int area(struct rectangle *r)
{
  return r.length*r.breadth;
}

void changelength(struct rectangle *r,int l)
{
  r->length=l;
}

int main()
{
  struct rectangle r;
  cout<<"Enter value of length - ";
  cin>>r.length;
  cout<<"\nEnter value of breadth - ";
  cin>>r.breadth;

  initialize(&r); //Here we are giving address so we can easily modify this value bye this function
  cout<<"\n"<<area(&r);  //Here we are just giving value we can't modify value by this function
  changelength(&r,20);
  cout<<"\nNow after changing value of length it is ";
  cout<<r.length;
  return 0;
}
