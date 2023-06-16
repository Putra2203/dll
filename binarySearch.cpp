#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int find) {
    if(low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if(find == arr[mid]) {
        return mid;
    } else if(find < arr[mid]) {
        return binarySearch(arr, low, mid-1, find);
    } else {
        return binarySearch(arr, mid+1, high, find);
    }
}

void answer(int a, int b) {
    if(a == -1) {
        cout << "Angka yang Anda cari tidak ada di dalam array";
    } else {
        cout << "Angka " << b << " ditemukan di index ke-" << a;
    }
}

int main() {
    int arr[5] = {2, 4, 7, 10, 16};
    int size = 5;
    cout << "Disediakan array urut [2, 4, 7, 10, 16]" << endl;
    int cari;
    cout << "Masukkan angka yang ingin dicari! ";
    cin >> cari;
    int hasil = binarySearch(arr, 0, size-1, cari);
    answer(hasil, cari);

    return 0;
}