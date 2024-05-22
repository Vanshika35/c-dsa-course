#include<iostream>
using namespace std;
int power(int num1, int num2){
    int ans = 1;
    for(int i = 1; i<= num2; i++){
        ans = ans*num1;
    }
    return ans;
}

/*int main(){
    int a, b;
    cin >> a >> b;
    
    int answer = power(a, b);
    cout << "answer is " << answer << endl;
    int c, d;
    cin >> c >> d;
    cout << "answer is " << power(c, d) << endl;
   
}
int power(){
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    int ans = power();
    cout << "answer is " << ans << endl;

     ans = power();
    cout << "answer is " << ans << endl;

     ans = power();
    cout << "answer is " << ans << endl;

}
// finding even and odd number
// 1 -> even
// 0-> odd
bool  isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    //even
    return 1;

}
int main(){
    int num;
    cin >> num;
    if(isEven(num)){
        cout << "number is even"<< endl;
    }
    else{
        cout << "number is odd" << endl;
    }
}*/

// function call stack->

