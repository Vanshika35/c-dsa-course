#include<iostream>
using namespace std;

// function signature
void printCounting(int n){
    // function Body
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
    return;

}

int main(){
    int n;
    cin >> n;
    //function call
    printCounting(n);
}