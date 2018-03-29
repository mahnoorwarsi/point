#include<iostream>
using namespace std;
#include "point.h"
main()
{
  
  point A(0,0);
  point B(3,2);
  point C(0,0);
  point D;
 // point B = point C;
  D=A.add(A,B);
  A.display();
  B.display();
  C.display();
  cout<<"sum of A and B is ";
  D.display();
  getchar();
}