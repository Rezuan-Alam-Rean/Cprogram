#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int mx = INT_MIN;
    int second_mx = INT_MIN;
    for (int i = 0; i < 10; i++) {
        if (array[i] > mx) {
            second_mx = mx;
            mx = array[i];
        }
        else if (array[i] > second_mx) {
            second_mx = array[i];
        }
    }
    cout << "Maximum number is : " << mx << " & Second maximum number is : " << second_mx << endl;
    
    return 0;
}