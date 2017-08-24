#include <iostream>
#include <stdio.h>
using namespace std;
/*class xyz
{

};


int main ()
{
 xyz xy;
 cout << sizeof(xy);
 return 0;
}
*/
/*int main()
{
unsigned char ch = 0;
int count = 0;
while (++ch <= 255)
{
  count++;
  cout << ch<< endl; 
}
cout << count ;

return 0;
}
*/



class A{
public :
    A(){
    cout << "A";
    MyMethod();
}

virtual ~A(){
     cout << "Z";
};

virtual void MyMethod(){
cout << "O";
}

};




class B : public A
{

public:
  B(){
cout << "B";
}

~B(){
cout << "Y";
}

void MyMethod(){
cout << "L";
}
};


int main()
{
A* a= new B();
a -> MyMethod();
return 0;
}






