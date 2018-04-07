#include <iostream>
#include "mymath.h"

using namespace std;

int main()
{
    int decToBin, pascal;
    double sqrt, a, b, c, wall;
    cout << "Enter a number that you want square root of: ";
    cin >> sqrt;
    cout << "Square root of " << sqrt << " is " << squareRoot(sqrt) << endl;
    cout << "Enter a number that you want to have in binary code: ";
    cin >> decToBin;
    cout << decToBin << " in binary code is ";
    decimalToBinary(decToBin);
    cout << endl;
    cout << "Now let's solve a quadratic equation, enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    quadraticEquationSolution(a, b, c);
    cout << "How many levels of Pascal's Triangle do you want(<18): ";
    cin >> pascal;
    pascalTriangle(pascal);
    cout << "Good time to compute area of a circle inside equilateral triangle" << endl;
    cout << "Let's enter the wall of your triangle: ";
    cin >> wall;
    cout << "Area of your circle is nearly to " << circlePoleInsideEquilateralTriangle(wall) << endl;


    return 0;
}
