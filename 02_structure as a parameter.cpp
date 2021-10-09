// STRUCTURE as a PARAMETER

#include<iostream>
using namespace std;

struct rectangle
{
  int length;
  int breadth;
};

int area (struct rectangle r1)  //call by value
{
  //r1.length++;
  return r1.length*r1.breadth;
}

/* call by refernce
int area (struct rectangle &r1)
(remaning same as above) */

int main()
{
  struct rectangle r;
  cout<<"\nEnter length of rectangle - ";
  cin>>r.length;
  cout<<"\nEnter breadth of the rectangle - ";
  cin>>r.breadth;
  cout<<area(r);
  return 0;
}


/*
-------------CALL by value-------------

struct rectangle
{
 int length;
 int breadth;
};

void changelength(struct rectangle *p,int l)
{
 p->length=l;
}

int main()
{
 struct rectangle r={10,5};
 change length (&r,20);
}

*/
