#include<iostream>
using namespace std;

int isPrime(int n){
    if(n<= 1){
        cout << "neither prime nor composite";
    }
        int c = 2;
        bool value = 1;
        while(c*c <= n){
            if (n%c == 0){
                //cout << "not prime" << endl;
                value = 0;
                break;
            }
            c = c+1;
        }return value;
    
}

int main(){

    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "number is prime";

    }else{
        cout << "number is not prime";
    }
    
}
