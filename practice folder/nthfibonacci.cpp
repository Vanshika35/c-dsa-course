#include<iostream>
using namespace std;

int nthFibonacciTerm(int n){
    
    int a = 0;
    int b = 1;
    for(int i = 3; i <= n; i++){
        int nextFib = a+b;
        a = b;
        b = nextFib;
    }
    return b;

}

int main(){

    int n;
    cin >> n;
    int ans = nthFibonacciTerm(n);
    cout << "nth term is " << ans;
}