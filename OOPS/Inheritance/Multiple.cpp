#include<bits/stdc++.h>
using namespace std;

class A{
  public:
  void Afunc(){
cout<<"Multiple "<<" ";
  }
};

class B{
  public:
  void Bfunc(){
    cout<<"Inheritance "<<" ";
  }
};

class C:public A,public B{
  public:
  void Cfunc(){
  }
};
int main(){
C c;
c.Afunc();
c.Bfunc();
c.Cfunc();
return 0;
}