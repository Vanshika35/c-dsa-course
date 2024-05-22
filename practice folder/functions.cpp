#include<iostream>
using namespace std;



int power(){

    int a, b;
     cout << " enter number : " ;
     cin >> a;
     cout << "enter the power of that number to find : ";
     cin >> b;

    int ans = 1; 

     for(int i = 1; i <= b; i++){

        ans = ans * a;
     }

     return ans;    

}

int main(){
     
    
     int ans = power();
     
     cout << "ans is " << ans << endl;

      ans = power();
     
     cout << "ans is " << ans << endl;

      ans = power();
     
     cout << "ans is " << ans << endl;

}