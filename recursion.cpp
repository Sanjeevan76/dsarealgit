#include<iostream>
using namespace std;

int print(int arr[], int n) {
    if(n == 5) return 0;
    return arr[n] + print(arr, n + 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 0;
    int sum = print(arr, n);
    cout << "Sum of array: " << sum << endl;
    return 0;
}
