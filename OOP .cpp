#include<iostream>
using namespace std;
class Rectangle()
{
  private:
  int length;
  int breadth;

  public:
  Rectangle()//constructor
  {
    length=1;
    breadth=1;
  }
  Rectangle(int l,int b);//parametrised constructor
  int area();
  int perimeter();
  int getlength(); return length;
  void setlength(int l); length=l;
  ~Rectangle()
};

Rectangle::Rectangle(int l,int b)
{
  length=l;
  breadth=b;
}
int Rectangle::area()
{
  return length*breadth;
}
int Rectangle::perimeter();
{
  return 2*(length+breadth);
}
Rectangle::~Rectangle()
{
  cout<<"The role of destructor has come:"<<endl;
}
int main()
{
  Rectangle r;
  Rectangle (10,5);
  cout<<r.area()<<endl;
  cout<<r.perimeter()<<endl;
  r.setlength(20);
  cout<<r.getlength();
}
