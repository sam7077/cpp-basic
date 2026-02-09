#include<iostream>
using namespace std;
void add(int a, int b, int c=0, int d=1){
    cout<<"Sum: "<<a+b+c+d<<endl;

}
int main(){
    /*int num1, num2, num3, num4;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    add(num1,num2);
    cout<<"Enter 4 numbers: ";
    cin>>num1>>num2>>num3>>num4;
    add(num1,num2,num3,num4);*/


    // demonstrating default arguments 
        add(5,10); // c and d will take default values
        add(5,10,15); // d will take default value
        add(5,10,15,20); // no default values will be used
    return 0;
}