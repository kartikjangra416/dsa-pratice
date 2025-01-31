#include <iostream>
using namespace std;

void merge(int arr[], int start, int end) {
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int k = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    // Merge two sorted arrays
    int i = 0, j = 0;
    k = start;
    while (i < len1 && j < len2) {
        if (first[i] <= second[j]) {
            arr[k++] = first[i++];
        } else {
            arr[k++] = second[j++];
        }
    }

    while (i < len1) {
        arr[k++] = first[i++];
    }

    while (j < len2) {
        arr[k++] = second[j++];
    }

    // Free allocated memory
    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;
    mergesort(arr, 0, size - 1);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
