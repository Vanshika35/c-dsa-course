#include<iostream>
using namespace std;

int main(){
    int L, R, val1, val2;
    cin >> L >> R;
    if(R % 4 == 0) val1 = R; 
    if(R % 4 == 1) val1 = 1;
    if(R % 4 == 2)  val1 =  R+1;
    if(R % 4 == 3)  val1 = 0;
    if(L-1 % 4 == 0) val2 = L-1;
    if(L-1 % 4 == 1) val2 = 1;
    if(L-1 % 4 == 2) val2 = L;
    if(L-1 % 4 == 3) val2 = 0;
    int result = val1 ^ val2;
    cout << result << endl;
    
}