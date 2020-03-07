#include <iostream>
using namespace std;
int e;
float f;
class base   
{
    public:
   virtual void print()
  {
  cout<<f<<endl;
  }
virtual void show()
    {
       cout<<"enter a float number"<<endl;
       cin>>f;
    }
};
class Derived:public  base
{
public:
void print()
    {
        cout<<e<<endl;
    }
void show()
  {
     cout<<"enter a number"<<endl;
     cin>>e;
  }

};
int main() 
  {
   base b,*arr;
   Derived d;
   arr=&b;
 
   arr->show();
  arr->print();
   arr=&d;
   arr->show();
   arr->print();
  
}
