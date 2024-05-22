#include<iostream>
using namespace std;

int setBitA(int a){
    
    int count = 0;
    while(a!=0){

        if(a&1){
            count++;
        }
        a = a>>1;
    }
    return count;
}

int setBitB(int b){

    int count = 0;
    while(b != 0){

        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = setBitA(a);
    int ans1 = setBitB(b);
    cout << "no. of set bits in a are : " << ans << endl;;
    cout << "no of set bits in b are : " << ans1 << endl;
    cout << "total number of set bits in a and b are : " << ans + ans1 << endl;
    
}