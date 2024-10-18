#include<bits/stdc++.h>
using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    Person(string n, int a) {
      setName(n);
      setAge(a);
    }

    string getName() {
      return name;
    }

    void setName(string n) {
      if (!n.empty()) {
        name = n;
      }
    }

    int getAge() {
      return age;
    }

    void setAge(int a) {
      if (a > 0) {
        age = a;
      }
    }

    void display() {
      cout << "Name: " << getName() << endl;
      cout << "Age: " << getAge() << endl;
    }
};

int main() {
  string s;
  int a;
  cout << "Enter name: ";
  cin >> s;
  cout << "Enter age: ";
  cin >> a;
  cout<<endl;
  Person p(s, a);
  p.display();
  cout << "Enter new name: ";
  cin >> s;
  cout<<endl;
  p.setName(s);
  p.setAge(30);
  p.display();
  return 0;
}