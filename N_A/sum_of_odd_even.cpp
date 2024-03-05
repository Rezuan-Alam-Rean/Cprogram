#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    int sum_odd = 0, sum_even = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sum_even += array[i];
        } else {
            sum_odd += array[i];
        }
    }
    cout << endl;
    cout << "Sum of odd numbers : " << sum_odd << endl;
    cout << "Sum of odd numbers : " << sum_even << endl;
    return 0;
}