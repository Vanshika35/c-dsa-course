#include<iostream>
using namespace std;
int nthTermOfap(int n){
    int ans = 3*n+7;
    return ans;
}

int main(){
    int n;
    cin >> n;
    int answer = nthTermOfap(n);
    cout << "answer is " << answer << endl;
}