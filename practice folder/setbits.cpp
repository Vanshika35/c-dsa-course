#include<iostream>
using namespace std;

int SetBitsA(int num1){

    int counta = 0;
    while(num1 != 0){
        int bit = num1 & 1;
        if(bit){
            counta++;
        }
        num1 = num1 >> 1;
    }
    return counta;
}

int SetBitsB(int num2){

    int countb = 0;

    while(num2 != 0){
        int bit = num2 & 1;
        if(bit){
            countb++;
        }
        num2 = num2 >> 1;
    }
    return countb;
}


int main(){
    int a, b;
    cin >> a >> b;
    int ans = SetBitsA(a) + SetBitsB(b);
    cout << "answer is " << ans;
}