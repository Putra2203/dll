#include<iostream>
using namespace std;

void recursivebubblesort(int arr[], int n){
    if(n == 1)
        return;

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i+1]){
                int tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;           // 1 2 3 4
        }
    }

    recursivebubblesort(arr, n - 1);
}

int main()
{
    int arr[] = {2,3,1,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Sebelum di sorting : ";
    for (int i=0; i < n; i++){
        cout << arr[i];
    }

    cout<<endl;

    recursivebubblesort(arr, n);

    cout<<"Setelah di sorting : ";
    for(int i=0; i < n; i++){
        cout<< arr[i];
    }

}
