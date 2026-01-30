#include <iostream>
using namespace std;

// Area of circle
float area(float radius) {
    return 3.14f * radius * radius;
}

// Area of rectangle
float area(float length, float width) {
    return length * width;
}

// Area of triangle
float area(float base, float height, char) {
    return 0.5f * base * height;
}

int main() {
    float r, l, w, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << area(l, w) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h, 't') << endl;

    return 0;
}
