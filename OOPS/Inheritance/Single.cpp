#include<bits/stdc++.h>
using namespace std;

class A{
  public:
    void func(){
      cout<<"Single Inheritance"<<endl;
    }
};
class B: public A{
  public:
  void func1()
  {
    cout<<"Hello"<<" ";
  }
};
int main(){
  B b;
  b.func1();
  b.func();
  return 0;
}