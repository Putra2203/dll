#include <iostream>
using namespace std;

void InsertionSort(int myArr[], int size) {
    if (size <= 1) return;
    InsertionSort(myArr, size - 1);

    int last = myArr[size - 1];  // { 1 }
    int j = size - 2;

    while (j >= 0 && myArr[j] > last) { 
        myArr[j + 1] = myArr[j];            // 2 2 3
        j--;                        // -1
    }
    
    myArr[j + 1] = last;        // 1 2 3
}

void printArr(int myArr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << myArr[i] << " ";
    }
}

int main() {
    int myArr[] = {2, 3 ,1};
    InsertionSort(myArr, 3);
    printArr(myArr, 3);

    return 0;
}