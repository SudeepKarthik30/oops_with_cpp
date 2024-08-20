#include <iostream>
using namespace std;
class p
{
 int x,y,z;
public:
        void display();
        p();
        p(p&);
};

void p::display()
{
  cout << " x :: " << x;
  cout << " y :: " << y;
  cout << " z :: " << z;
}

p::p()
{ 
  x=9;
  y=8;
  z=7;
}

p::p(p & a)
{
 x=a.x;
 y=a.z;
 z=a.z;
}

int main() 
{
  p obj;
  obj.display();
  p t(obj);
  t.display();
  return 0;
}