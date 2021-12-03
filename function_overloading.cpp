#include<iostream>
using namespace std;
class A
{
public:
   void area(int r);
   void area(int l,int b);
   void area(float t,int h,int e);
};
void A::area(int r)
{
 cout<<"\n Area of circle is: "<<3.14*r*r;
}
void A::area(int l,int b)
{
 cout<<"\n Area of rectangle is: "<<l*b;
}
void A::area(float t,int h,int e)
{
 cout<<"\n Area of triangle is: "<<t*h*e;
}
int main()
{
int r,h,e,l,b;
float t;
int ch;
A obj;
cout<<"\t--CALCULATION OF AREA--";
cout<<"\n\n  1.Area of circle";
cout<<"\n  2.Area of rectangle";
cout<<"\n  3.Area of triangle";
cout<<"\n\n Enter your choice: ";
cin>>ch;
switch(ch)
{
  case 1:
     cout<<"\n Enter the value of radius of the circle: ";
     cin>>r;
     obj.area(r);
     break;
  case 2:
     cout<<"\n Enter the length of rectangle: ";
     cin>>l;
     cout<<"\n Enter the breath of rectangle: ";
     cin>>b;
     obj.area(l,b);
     break;
  case 3:
     cout<<"\n Enter the height of triangle: ";
     cin>>h;
     cout<<"\n Enter the base of triangle: ";
     cin>>e;
     obj.area(0.5,h,e);
     break;
default:
     cout<<"\n Wrong choice enter given number!";
  }
return 0;
}
