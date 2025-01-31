#include <iostream>
using namespace std;

void merge(int a1[], int s1, int a2[], int s2, int a[], int s) {
    int i = 0, j = 0, k = 0;

    // Merge arrays until one of them is exhausted
    while (i < s1 && j < s2) {
        if (a1[i] < a2[j]) {
            a[k++] = a1[i++];
        } else {
            a[k++] = a2[j++];
        }
    }

    // Copy remaining elements of a1[], if any
    while (i < s1) {
        a[k++] = a1[i++];
    }

    // Copy remaining elements of a2[], if any
    while (j < s2) {
        a[k++] = a2[j++];
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a1[3] = {1, 3, 5};
    int a2[2] = {2, 4};
    int a[5] = {0};

    merge(a1, 3, a2, 2, a, 5);

    print(a, 5);

    return 0;
}
