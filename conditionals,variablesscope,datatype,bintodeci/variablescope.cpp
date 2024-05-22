#include<iostream>
using namespace std;
int main(){
   /*int a = 3;
   cout << a << endl;
   if(true){
    int b = 5;
    cout << b << endl;
   } 
   int b = 1;
   cout << b << endl;
   //operator precedence*/
    /*int n;
    cin >> n;
    int sum = 0;
    int product = 1;
   for(int i = n; i!=0; i = i/10 ){
        int digit = i%10; 
        sum = sum + digit;
        product = product * digit;
     }
   int ans = product - sum;
   cout << ans << endl;*/
   int n;
   cin >> n;
    int sum = 0;
    int prod = 1;
   while(n!=0){
    int digit = n%10;
    sum += digit;
    prod *= digit;
    n = n/10; 

   }
   int ans = prod - sum;
   cout << ans;

}