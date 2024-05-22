#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int even[6] = {4, 9, 12, 1, -2, 8};
    int odd[5] = {18, 2, 6, 1, 7};

    reverse(even, 6);
    reverse(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);
}