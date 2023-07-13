#include<iostream>
using namespace std;
//function signature
void printCounting(int num){
    // will give error because this n is beyond the scope of this function 
    //cout << n << endl;
    //function body
    for(int i = 1; i<=num; i++){
        cout << i << " ";
    }
    // we can use return or not use it it depends on us since return here is not returning anything so it totally depends on us..
    return;
}
int main(){
    int n;
    cin >> n;
    // function call
    printCounting(n);

}