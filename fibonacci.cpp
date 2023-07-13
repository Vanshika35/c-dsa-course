#include<iostream>
using namespace std;

int fibonacci(int n){
    
    if(n==1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int prevfib = 0;
    int currentfib = 1;
    for(int i = 2; i<n;i++){
        int newfib = prevfib + currentfib;
        prevfib = currentfib;
        currentfib =  newfib;
    }
    return currentfib;

}
int main(){
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << "nth fibonacci number is " << ans << endl;

}
