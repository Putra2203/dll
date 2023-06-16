#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int find) {
    if (size == 0) {
        return -1;
    } else if(arr[size-1] == find) {
        return size - 1;
    }
    return linearSearch(arr, size-1, find);
}

void answer(int a, int b) {
    if(a == -1) {
        cout << "Angka yang Anda cari tidak ada di dalam array";
    } else {
        cout << "Angka " << b << " ditemukan di index ke-" << a;
    }
}

int main() {
    int arr[5] = {14, 25, 7, 31, 9};
    int find;
    cout << "Diketahui array [14, 25, 7, 31, 9]"<< endl;
    cout << "Masukkan angka yang ingin dicari! "<< endl;
    cin >> find;
    int hasil = linearSearch(arr, 5, find);
    answer(hasil, find);
    return 0;
}
