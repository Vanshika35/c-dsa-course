#include<iostream>
using namespace std;


void swap1(int a, int b){

    int temp = b;
    b = a;
    a = temp; 

    cout << a << " " << b;
}
    


int main(){
    int a = 5, b = 6;
    swap1(a, b);
    
    cout << endl << a << " " << b;
}