#include<bits/stdc++.h>
using namespace std;
int main(){
    double fahrenheit;
    // cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << "Temperature in Celsius: " << celsius << endl;    
    
    return 0;
}