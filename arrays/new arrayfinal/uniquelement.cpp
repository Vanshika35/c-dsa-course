#include<iostream>
using namespace std;

int uniqueElement(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int uniquelement2(int arr[], int n){

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

    return -1;e
}
int main(){
    int a[5] = {3, 4, 4, 3, 90};
    int ans = uniquelement2(a, 5);
    cout << ans << endl;
}

