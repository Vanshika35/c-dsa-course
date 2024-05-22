#include<iostream>
#include<math.h>
using namespace std;

int main(){

  /* int a = 4;
    int b = 6;

    cout << "a&b : " << (a&b) << endl;

    cout << "a|b : " << (a|b) << endl;

    cout << "~a : " << (~a) << endl;

    cout << "a^b : " << (a^b) << endl;  
    cout << (17 >> 1) << endl;

    cout << (17 >> 2) << endl;

    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;  */


// i++ -> post increment
// ++i -> pre increment
// i-- -> post decrement
// --i -> pre decrement
// int i = 4;
//  i++;
// cout << i << endl;
// i++;
// cout << i << endl;
// int a = 34;
// int sum = a + (i++);
// cout << sum << endl; 
// int c = i++;
// cout << c << endl;
// int a = i++;
// cout << a << endl;

// int is = 11;
// int ab = ++is;
// cout << ab << endl; 

// int a = 2, i = 3;
// int sum = a + (++i);
// cout << sum << endl;
// int an = 3, ic = 4;
// int sum2 = an + (ic++);
// cout << sum2 << endl; 

// int i = 3;
// int a = i--;
// cout << a << endl; // expected value is 3
// cout << i << endl;
// int ab = --i; // i value is 2
// cout << ab << endl; // expected ans = 1
// cout << i << endl; // expected ans = 1

// int i = 7;
// cout << (++i) << endl; // 8
// cout << (i++) << endl; // 8
// cout << (i--) << endl; //9
// cout << (--i) << endl; //7

// int a, b = 1;
// a = 10;
// if(++a){
//     cout << b;
// } else{
//     cout << ++b;
// }

// int a = 1;
// int b = 2;
// if(a-- > 0 && ++b > 2){
//     cout << "Stage1 - inside if";
// }else{
//     cout << "Stage2 - inside else";
// }
// cout << a << " " << b << endl;

// int number = 3;
// cout << (25 * (++number));
// int a = 1;
// int b = a++;
// int c = ++a;
// cout <<  b << endl;
// cout << c << endl;
// int d = 19;
// cout << d++ << endl; // 19, 20
// cout << ++d << endl; // 21, 21
// cout << d-- << endl;// 21, 20
// cout << --d << endl;// 19, 19

// int n;
// cin >> n;
// for(int i = 1; i <= n; i++){
//     cout << i << " ";
// }

// int n;
// cin >> n;
// int sum = 0;

// for(int i = 1; i <= n; i++){
//     sum += i;
// }

// cout << "sum is " << sum << endl;

// fibonacci series
/*int n;
cin >> n;
int a = 0;
int b = 1;

cout << a << " " << b << " ";
for(int i = 1; i <= n; i++){
    int nextNumber = a + b;
    cout << nextNumber << " ";
     a = b;
     b = nextNumber;

} */

// prime number code
/*int n;
cin >> n;

bool isPrime = 1;

for(int i = 2; i < n; i++){
    if(n%i == 0){
        isPrime = 0;
        break;
    }
}

if(isPrime){
    cout << "given number is Prime";
}
else{
    cout << "given no not prime";
}*/

// for(int i = 0; i < 5; i++){
//     cout << "hi" << endl;
//     cout << "hey" << endl;
//     continue;
//     cout << "reply toh kar de" << endl;
// }

// infinite loop

/*for(int i = 0; i <= 5; i--){
    cout << i << " ";
    i++;
}*/

// very interesting and important concept
/*for(int i = 0; i <= 15; i+=2){
    cout << i << " ";

    if(i & 1){
        continue;
    }
    i++;

} */
/*
for(int i = 0; i< 5; i++){
    for(int j = i; j<= 5; j++){
        cout << i << " " << j << endl;
    }
}

for(int i = 0; i < 5; i++){
    for(int j = i; j <= 5; j++){
        if(i+j == 10){
            break;
        }
        cout << i << " " << j << endl;
    }
}*/

// variable scoping

// int a = 3;
// cout << a << endl;

// if(true){
//     int b = 5;
//     cout << b << endl;
// }

// int b = 1;
// int i = 8;
// cout << b << endl;

// for(int i = 0; i < 8; i++){
//     cout << "HI" << endl;
// }


// binary and decimal number system
// decimal to binary

/*int n;
cin >> n;

int ans = 0;
int i = 0;
while(n != 0){

    int bit = n & 1;

    ans = (bit * pow(10,i) ) + ans;
    
    n = n >> 1;
    i++;
}

cout << ans << endl; */
 
 // binary to decimal
/*
 int n;
 cin >> n;

int i = 0, ans = 0;
 while(n != 0){
    int digit = n % 10;
    if(digit == 1){
        ans = ans + pow(2, i);
    }
    n = n / 10;
    i++;

 }
 cout << ans << endl; */
 int a = 5;
 cout << ~a << endl;


}