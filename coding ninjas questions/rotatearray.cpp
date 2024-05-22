#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}
void ReverseToLeft(int arr[], int n, int k){
    k = k%n;
    Reverse(arr,0, k - 1);
    Reverse(arr, k, n-1);
    Reverse(arr, 0, n-1 );
}
void printArray(int arr[], int n){
    for(int i = 0; i < n;  i++){
        cout << arr[i] << " ";
    }cout << endl;
}
vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    //finding modulo of steps by size so that we can get original steps by which to shift 
    k = k%n;
    vector<int> temp;
    // storing the shifting values in temp
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }
    // shifting the values
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }
    // adding the value stored in temp at last
    for(int i = n-k; i < n; i++){
        arr[i] = temp[i-(n-k)];
    }
    return arr;

}

int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // int k;
    // cin >> k;
    ReverseToLeft(arr, 7, 6);
    printArray(arr, 7);
    
}
