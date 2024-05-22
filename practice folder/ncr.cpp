#include<iostream>
using namespace std;

int fact(int n){

    int factorial = 1;
    if(n == 0){
        return 1;
    }

    for(int i = 1; i <= n; i++){

        factorial = factorial * i;
    }
    return factorial;

}

int nCr(int n, int r){
   
   int num = fact(n);

   int denom = fact(r) * fact(n-r);

   return num/denom;


}

int main(){
    int n, r;

    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "ans is " << ans;

}