#include<iostream>
using namespace std;        
// Function to calculate area of circle
double area(double radius) {
    return 3.14159 * radius * radius;
}   
// Function to calculate area of rectangle      
double area(double length, double width) {
    return length * width;
}   
// Function to calculate area of triangle
double area(double length, double width, double height) {
    return 0.5 * length * width * height;
}
int main() {
   cout<<"Enter radius of circle: ";
   double radius;
    cin>>radius;
    cout << "Area of circle: " << area(radius) << endl;
    cout<<"Enter length and width of rectangle: ";
    double length, width;
    cin>>length>>width; 
    cout<<"Enter length, width and height of cuboid: ";
    double height;
    cin>>height;
    cout<<"Area of circle: "<<area(radius)<<endl;
    cout << "Area of rectangle: " << area(length, width) << endl;
    cout << "Area of tringle: " << area(length, width, height) <<endl;
    
    return 0;
}