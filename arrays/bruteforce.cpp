#include<iostream>
using namespace std;

int uniqueElement(int arr[], int n){

    
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
               count++;
        }
    }
    if(count == 1){
    return arr[i];
}

}

    return -1;
}


int main(){

    int arr[5] = {1, 2, 3, 2, 1};
    int ans = uniqueElement(arr, 5);
    cout << ans << endl;

    
}