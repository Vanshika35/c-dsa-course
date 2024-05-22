#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 3, 4, 2, 8};
    int prefixsum = 0;
    
    int val = 0;
    for(int i = 0; i < 5; i++){
        int suffixsum = 0;
        
        for(int j = i+1; j < 5; j++){
            suffixsum += arr[j];
        }
        if(i == 0){
            prefixsum = 0;
        } 
        else{
            prefixsum += arr[i - 1];
        } 
        if(prefixsum == suffixsum){
            val = i;
            break;
        }
    }
    cout << val << endl;
    
}