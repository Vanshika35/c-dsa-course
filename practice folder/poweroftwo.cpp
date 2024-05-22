#include<iostream>
using namespace std;

int powerOfTwo(int n){
    
        // for(int i = 0; i<=30; i++){

        //     int ans = pow(2, i);

        //     if(n == ans)
        //     {
        //         return true;
        //     }
        // }
        // return false;

        // long count = 0;
        // if(n < 1){
        //     return false;
        // }
        
        // while( n != 0){
        //     int bit = n & 1;

        //     if(bit){
               
        //         count ++;
        //     }

        //     n = n >> 1;
        // }
        // if(count == 1){
        //     return true;
        // }
        // return false;

        if(n < 1){
            return false;
        }
        if((n&(n-1)) == 0){
            return true;
        }
        else{
            return false;
        }

}

int main(){
    int n;
    cin >> n;
    int ans = powerOfTwo(n);

    cout << ans;
    
}