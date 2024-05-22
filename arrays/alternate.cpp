#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}

void ArrayAlternate(int arr[], int size){

    for(int i = 0; i < size; i+=2){

        if(i+1 < size){

            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){

    int even[8] = {4, 7, 6, 2, 3, 1, 9, 8};
    int odd[5] = {3, 5, 7, 9, 1};

    ArrayAlternate(even, 8);
    printArray(even, 8);
    cout << endl;
    ArrayAlternate(odd, 5);
    printArray(odd, 5);


}