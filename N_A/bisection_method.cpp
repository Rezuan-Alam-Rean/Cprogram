#include<bits/stdc++.h>
using namespace std;


#define f(x) 3 * x - cos(x) - 1
int main(){
    float x0, x1, x, f0, f1, f, e;
    int step = 1;


    up:
    cout << "Enter the first guess : ";
    cin >> x0;
    cout << "Enter the second guess : ";
    cin >> x1;
    cout << "Enter tolerable error : ";
    cin >> e;


    f0 = f(x0);
    f1 = f(x1);


    if (f0 * f1 > 0.0) {
        cout << "Incorrect initial guess" << endl;


        goto up;
    }


    do {
        x = (x0 + x1) / 2.0;
        f = f(x);




        cout << "Iteration - "  << step << ":\t x = " << setw(10) << x << " and f(x) = " << setw(10) << f(x) << endl;


        if (f0 * f < 0.0) {
            x1 = x;
        } else {
            x0 = x;
        }


        step++;
    } while (fabs(f) > e);
   
    cout << endl << "Root is : "  << x << endl;
   
    return 0;
}
