#include<iostream>
#include<math.h>
using namespace std;

int main(){
   /* int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;*/
    // answer in right flow
    // int n;
    // cin >> n;
    // int ans = 0;
    
    // while(n != 0){
    //     int bit = n&1;
    //     ans = (ans * 10) + bit;
    //     n = n >> 1;

    // } 
    // cout << "answer is " << ans << endl;
//printing in reverse order
/*int n;
cin >> n;
int ans = 0;
while(n != 0){
    int digit = n %10;
    ans = (ans *10)+digit;
    n = n/10;
}
cout << "answer is " << ans << endl;*/
// printing in same order
/*int n;
cin >> n;
int ans = 0;
int i = 0;
while(n != 0){
    int digit = n%10;
    ans = (digit * pow(10, i)) + ans;
    n = n/10;
    i++;
}
cout << "Answer is " << ans << endl;*/

}
