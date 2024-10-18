#include<bits/stdc++.h>
using namespace std;

class  Circle{
  public:
  double rad;
  double Method1()
  {
    return 3.14*rad*rad;
  }
};
int main()
{
  Circle c;
  cout<<"Enter Radius : ";
  cin>>c.rad;
  cout<<"Radius : "<<c.rad<<endl;
  cout<<"Area : "<<c.Method1()<<endl;
  return 0;
}