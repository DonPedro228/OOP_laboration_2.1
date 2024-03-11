#include <iostream>
#include "Triangle.h"

using namespace std;


int main() {

    double a;
    cout << "Input a: "; cin >> a;
    double b;
    cout << "Input b: "; cin >> b;
    Triangle triangle(a, b); 
    cout << ++a << endl;
    cout << "Triangle hypotenuse: " << triangle.hypotenuse() << endl; 
    cout << "Triangle info: " << string(triangle) << endl;

    return 0;

}