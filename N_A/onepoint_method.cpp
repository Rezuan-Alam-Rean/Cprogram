#include<bits/stdc++.h>
using namespace std;

#define f(x) 3 * x - cos(x) - 1

#define g(x) (cos(x) + 1) / 3
int main(){
    float x0, x1, e;

    int step = 1, N;
    cout << "Enter initial guess value: ";
    cin >> x0;
    cout << "Enter tolerable error : ";
    cin >> e;
    cout << "Enter maximum number of iterations: ";
    cin >> N;
    do {
        x1 = g(x0);
        cout << "Iteration - "  << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;

        step++;
        if (step > N) {
            break;
        }
        x0 = x1;
    } while (fabs(f(x1)) > e);
    return 0;
}