#include<iostream>
using namespace std;

bool PowerOfTwo(int n){
    int count = 0;
    if(n < 1){
        return 0;
    }
    while(n != 0){
        int bit = n&1;
        if(bit){
            count++;
        }
        n = n >> 1;
    }

    if(count == 1){
        return 1;
    }else{
        return 0;
    }
    
}
int main(){

    int n;
    cin >> n;
    int ans = PowerOfTwo(n);
    cout << ans;
}