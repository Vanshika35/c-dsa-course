#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int position = 0;
    // while(n != 0){
    //     int bit = n & 1;
    //     if(bit == 1){
    //         break;
    //     }
    //     position++;
    //     n = n >> 1;
    // }
    // int mask = ~(1 << position);
    // int ans  = n & mask;
    // cout << ans << endl; 

    int ans = n & n-1;
    cout << ans << endl;
}