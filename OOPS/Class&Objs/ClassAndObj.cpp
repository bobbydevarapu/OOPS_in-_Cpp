#include<bits/stdc++.h>
using namespace std;
class Person {
  public:
  string name;
  int age;
  string roll;
  void display() {
    cout << "Name : " << name << endl;
    cout << "Age is : " << age << endl;
    cout << "Roll is : " << roll << endl;
  }
};

int main() {
  Person p;
  cout<<" ENTER Details : ";
  cin >> p.name;
  cin >> p.age;
  cin >> p.roll;
  p.display();
  return 0;
}
