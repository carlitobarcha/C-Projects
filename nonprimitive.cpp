#include <iostream>
using namespace std;

class Rectangle
 {
public:
    int length, width;
    int area()
	 {
        return length * width;
    }
};

int main()
 {
    Rectangle rect;
    rect.length = 5;
    rect.width = 10;
    cout << "Area: " << rect.area() << endl;
    return 0;
}

