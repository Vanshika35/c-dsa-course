#include<iostream>
using namespace std;

bool palindrome(int x){
    
    long int ans = 0;
    int temp = x;
    while( x > 0){

        ans = (ans*10) + (x%10);
        x = x/10;
    }
    if(ans == temp) {
        return true;
    }
    else {
        return false;
    }


}
int main(){
    int n;
    cin >> n;
    
    if(palindrome(n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}