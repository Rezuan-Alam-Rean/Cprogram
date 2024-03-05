#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 10, y = 5;
    cout << "Before interchanging : "<< x << ", " << y << endl;
    int temporary = x;
    x = y;
    y = temporary;
    cout << "After interchanging : "<< x << ", " << y << endl;
    return 0;
}