#include<iostream>
using namespace std;

int main(){

    //check if ith bit is set or not
    int n, i;
    cin >> n >> i;
    int bit =  n & (1 << i);
    if(bit != 0){
        cout << "true, bit is set" << endl;
    }else{
        cout << " bit is not set" << endl;
    }

}