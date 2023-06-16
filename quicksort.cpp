#include <iostream>
using namespace std;

void quicksort(int arr[], int left, int right) // [1, 5, 4, 7] , 0, 1
{
    int i = left;  // i = 1
    int j = right; // j = 2
    int tmp;
    int pivot = arr[left]; //pivot = 5

    // partition
    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;    // 
        }
        while (arr[j] > pivot) 
        {
            j--; // j = 2
        } 
        if (i <= j)
        {
            tmp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = tmp;    // [1, 4, 5, 7]
            i++;           // i = 1
            j--;           // j = 1
        }
    }
    //rekursif
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
    
}

int main()
{
    int arr[] = {4, 5, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sebelum sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quicksort(arr, 0, n - 1);

    cout << "Setelah sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}