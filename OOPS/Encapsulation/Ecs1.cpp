#include<bits/stdc++.h>
using namespace std;
class Ball {
  private:
    float area;
    float radius;
  public:
    Ball(float r) {
      radius = r;
      area = 3.14 * pow(radius, 2);
    }
    float getArea() {
      return area;
    }
    float getRadius() {
      return radius;
    }
};

int main() {
  float r;
  cout << "Enter value: ";
  cin >> r;
  Ball obj(r);
  cout << "Area of the circle is : " << obj.getArea() << endl;
  cout << "Radius of the circle is : " << obj.getRadius() << endl;
  return 0;
}
