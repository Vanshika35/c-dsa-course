#include<iostream>
using namespace std;

int summ(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];  
    }
    return sum;
}


int main(){

    int size;
    cin >> size;

    int num[10];
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    int ans = summ(num, size);

    cout << " sum of elements is " << ans << endl;
}