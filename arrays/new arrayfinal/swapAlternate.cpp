#include<iostream>
using namespace std;

void Alternate(int arr[], int n) {

    for(int i = 0; i < n; i+=2 ){
        if( i+1 < n ){
            swap(arr[i], arr[i+1]);
        }
        
    }

}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int even[6] = {1, 23, 5, 9, 6, 72};
    int odd[5] = {34, 21, 62, 12, 5};

    Alternate(even, 6);
    Alternate(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);

}