#include<iostream>
using namespace std;

int main(){
    int n1 = 15;
    int n2 = 11;
    int position = 0; 
    while( n1 != 0 && n2 != 0){
        int bit1 = n1 & 1;
        int bit2 = n2 & 1;
        position++;
        if(bit1 != bit2){
            break;
        }
        n1 = n1 >> 1;
        n2 = n2 >> 1;
    }
    cout << position << endl;
}

