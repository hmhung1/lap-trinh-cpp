#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int partition(int arr[], int l, int h) {
    int p = arr[h], i = l - 1;
    for (int j = l; j < h; j++) {
        if (arr[j] < p) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int pi = partition(arr, l, h);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }
}

int main() {
    int arr[] = {9, 7, 3, 6, 14, 1, 2, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
