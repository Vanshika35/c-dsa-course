#include<iostream>
using namespace std;

int uniqueElement(int arr[], int n){

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[5] = {2, 3, 4, 3, 2};
    int ans = uniqueElement(arr, 5);
    cout << ans;
}