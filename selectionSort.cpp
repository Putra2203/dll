#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int findMinIndex(int arr[], int start, int end) {
    int minIndex = start;                             // {11, 12, 25, 22, 64}
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSortRecursive(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    
    int minIndex = findMinIndex(arr, start, end);
    if (minIndex != start) {
        swap(arr[minIndex], arr[start]);
    }

    selectionSortRecursive(arr, start + 1, end);
}

void selectionSort(int arr[], int size) {
    selectionSortRecursive(arr, 0, size - 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, size);
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}