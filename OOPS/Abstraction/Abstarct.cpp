#include <iostream>
using namespace std;
class AbstractShape {
public:
    virtual void draw() = 0;
};
class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};
class Rectangle : public AbstractShape {
public:
    void draw() override {
      cout << "Drawing a Rectangle" << endl;
    }
};
int main() {
    AbstractShape* shape;
    Circle circle;
    Rectangle rectangle;
    shape = &circle;
    shape->draw();
    shape = &rectangle;
    shape->draw();
    return 0;
}
