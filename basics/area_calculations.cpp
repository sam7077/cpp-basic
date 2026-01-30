#include<iostream>
using namespace std;
int main() {
int choice;
cout << "Area Calculations Program\n";
cout << "1. Area of Circle\n";
cout << "2. Area of Rectangle\n";
cout << "3. Area of Triangle\n";
cout << "Enter your choice (1-3): ";
cin >> choice;

switch(choice) {
    case 1: {
        double r;
        cout << "Enter radius of the circle: ";
        cin >> r;
        double area = 3.14159 * r * r;
        cout << "Area of Circle: " << area << endl;
        break;
    }
    case 2: {
        double length, width;
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
        break;
    }
    case 3: {
        double base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
        break;   
}
    return 0;
}
