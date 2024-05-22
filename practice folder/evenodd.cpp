#include<iostream>
using namespace std;

bool isEven(int num){

    if(num & 1){
        return false;
    }
    return true;

}

int main(){
    int a;
    cin >> a;
    if(isEven(a)){
        cout << "number is even" << endl;
    }else{
        cout << "number is odd " << endl;
    }
}