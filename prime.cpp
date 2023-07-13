#include<iostream>
using namespace std;
// 1->prime ->true
//0-> not prime->false
 bool isPrime(int n){
    for(int i = 2; i < n; i++){
        //divide hogaya -> not prime
        if(n%i == 0){
            return 0;
            break;
        }
    }
    
     return 1;

 }


int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(isPrime(n)){
        cout << "number is prime" << endl;
    }
    else{
        cout << "number is not prime" << endl;
    }

}