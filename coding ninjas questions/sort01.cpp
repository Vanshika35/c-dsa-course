#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void sortOne(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] == 0){
            s++;
        }
       
        else if(arr[s] == 1 && arr[e] == 0){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
         else{
            e--;
         }
            
        }
    }


int main(){
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortOne(arr, 8);
    printArray(arr, 8);
}
