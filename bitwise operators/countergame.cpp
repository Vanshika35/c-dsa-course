#include<iostream>
using namespace std;

int nearestpowerOftwo(int n){
    int power = 1;
    while(power <= n){
        power *= 2;
    }
    return power/2;

}

int main(){
    int n = 132;
    int nearestpower = nearestpowerOftwo(n);
    cout << nearestpower << " ";
}