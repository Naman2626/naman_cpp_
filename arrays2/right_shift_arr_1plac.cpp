#include<bits/stdc++.h>

using namespace std;

void solve(int arr[], int n) {
    int temp[n];
    temp[0] = arr[n - 1]; // Move last element to the first position

    for (int i = 1; i < n; i++) {
        temp[i] = arr[i - 1]; // Shift remaining elements to the right
    }

    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    solve(arr, n);
}
