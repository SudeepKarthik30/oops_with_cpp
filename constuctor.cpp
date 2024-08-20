#include <iostream>
using namespace std;
class p
{
 int x,y,z;
public:  void display();
         void display1();
         p(int,int);
         p(int);
};

void p::display()
{
  cout << "x :: " << x << endl;
  cout << "z :: " << z << endl;
}
void p::display1()
{
  cout << "y :: " << y << endl;
}
p::p(int b)
{
 y=b;
}
p::p(int a,int c)
{
 x=a;
 z=c;
}

int main()
{
  p a(4,9);
  p j(9);
  j.display1();
  a.display();
  return 0; 
}