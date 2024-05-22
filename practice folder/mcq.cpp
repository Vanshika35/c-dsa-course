#include<iostream>
using namespace std;

void update(int a){
    a = a / 2;

}

int update1(int a){
    a -= 5;
    return a;
}
int update2(int a){
    int ans = a * a;
    return ans;
}
int main(){
    // int a = 10;
    // update(a);
    // cout << a << endl;

    // int a = 15;
    // update1(a);
    // cout << a << endl;

    int a = 14;
    a = update2(a);
    cout << a << endl;

}