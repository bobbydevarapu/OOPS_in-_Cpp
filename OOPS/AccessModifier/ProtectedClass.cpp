#include<bits/stdc++.h>
using namespace std;

class ParentTri {
  protected:
    int b, h;
};
class ChildTri: public ParentTri {
  public:
    void setvalues(int a, int c) {
      b = a;
      h = c;
    }
    double display() {
      return 0.5 * b * h;
    }
};
int main() {
  ChildTri x;
  int base, height;
  cout << "Enter base and height: ";
  cin >> base >> height;
  x.setvalues(base, height);
  cout << "Area: " << x.display() << endl;
  return 0;
}
