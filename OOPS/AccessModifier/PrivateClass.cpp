#include<bits/stdc++.h>
using namespace std;

class Rectangle {
  private:
    double l, b;
  public:
    void setDimensions(double length, double breadth) {
        l = length;
        b = breadth;
    }
    double Peri() {
        return 2 * (l + b);
    }
    double Area() {
        return l * b;
    }
};

int main() {
    Rectangle r;
    double length, breadth;
    cout << "Enter length and breadth of the rectangle: "<<endl;
    cin >> length >> breadth;
    r.setDimensions(length, breadth);
    cout << "Perimeter: " << r.Peri() << endl;
    cout << "Area: " << r.Area() << endl;
    return 0;
}
