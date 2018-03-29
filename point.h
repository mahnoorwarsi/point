#include<iostream>
using namespace std;
class point
{
  private:
  double x;
  double y;

  public:
  point();
point(double x,double y)
{
  this->x=x;
  this->y=y;
}

void  setx(double x)
{
this->x=x;
}
void  sety(double y)
{
  this->y=y;
}
double getx()
{
  return this->x;
}
double gety()
{
  return this->y;
}
point add(point A,point B)
{
point result(A.x+B.x,A.y+B.y);
return result;
}
 void display()
{
  cout<<'('<<this->x<<','<<this->y<<')'<<endl;
}
};