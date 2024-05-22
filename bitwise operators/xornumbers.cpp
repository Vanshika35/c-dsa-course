#include<iostream>
using namespace std;

int main(){
    // xor of numbers from 1 to n complexity O(n) with for loop
    int n;
    cin >> n;
    /*int ans = 0;
    for(int i = 0; i <= n; i++){
        ans ^= i;
    }
    cout << ans << endl;*/

    // just using bit manipulation to solve this question in O(1) complexity no matter how big is the n
    if(n % 4 == 0) cout << n << endl;
    if(n % 4 == 1) cout << 1 << endl;
    if(n % 4 == 2) cout << n+1 << endl;
    if(n % 4 == 3) cout << 0 << endl;

}