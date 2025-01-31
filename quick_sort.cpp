#include <iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}
void quicksort(int *arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int index = partition(arr, start, end);
    quicksort(arr, start, index - 1);
    quicksort(arr, index + 1, end);
}
int main()
{

    int arr[6] = {4, 3, 6, 5, 7, 1};
    int size = 6;
    quicksort(arr, 0, size - 1);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "|";
    }
    cout << endl
         << endl;
}