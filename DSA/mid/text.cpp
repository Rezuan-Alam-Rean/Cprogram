#include <iostream>
#include <cmath>

using namespace std;

double function(double x) {
    // Define your function here, for example, let's use f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2*x - 5;
}

double falsePosition(double a, double b, double tolerance) {
    double c;
    int iterations = 0;
    
    while (fabs(b - a) >= tolerance) {
        // Calculate c using false position formula
        c = (a * function(b) - b * function(a)) / (function(b) - function(a));
        
        // Check if c is the root or not
        if (fabs(function(c)) <= tolerance) {
            break;
        } else if (function(c) * function(a) < 0) {
            b = c;
        } else {
            a = c;
        }
        
        iterations++;
    }
    
    cout << "Number of iterations: " << iterations << endl;
    return c;
}

int main() {
    double a, b, tolerance;
    // // Input values from the user
    // cout << "Enter the interval [a, b]: ";
    // cin >> a >> b;
    // cout << "Enter the tolerance: ";
    // cin >> tolerance;
    
    // // Apply the false position method
    // double root = falsePosition(a, b, tolerance);
    
    // // Output the result
    // cout << "Root is approximately: " << root << endl;
    double value = 1e19;
    cout << (long long int)value << endl;
    return 0;
}