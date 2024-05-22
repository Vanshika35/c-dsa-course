#include<iostream>

using namespace std;

int main(){

    /*int num = 1;
    char ch = '1';

    cout << endl;

    switch(ch){
        case 1 : cout << "First" << endl;
                break;

        case '1' : switch(num){
                    case 1 : cout << "Value of num is " << num << endl;
                             break;
                }
                break;
            
        
        default : cout << " It is a default case" << endl;
    }

    cout << endl; */
    // use of exit function
    /*while(true){
        int num = 2;
        switch(num){
            case 1 : cout << "inside case 1";
                        break;
            case 2 : cout << "inside case 2 of infinite while";
                        exit(0); // very useful function to terminate the program whenever encountered
            default : cout << "program over";
        }
    }
    cout << "program ends ! thanks exit to terminate the program" << endl;  */

    // how continue is not valid inside switch

    /*int num = 'b';
    switch(num){
        case 'a' : cout << "a block of switch";
                    break;

        case 'b' : cout << "b block of switch";
                    continue;
        default : cout << "wrong statement enter again";
    } */
/*
int day;
cout << "enter day no between 1 to 7 : ";
cin >> day;

switch(day){

    case 1 : cout << "monday" << endl;
            break;

    case 2 : cout << "tuesday" << endl;

    case 3 : cout << "wednesday" << endl;

    case 4 : cout << "thursday" << endl;

    case 5 : cout << "friday " << endl;

    case 6 : cout << "saturday " << endl;

    case 7 : cout << "sunday " <<  endl;  */

    // calculator 
/*
    int a, b;
    char op;
    cout << "enter the num1 : ";
    cin >> a;

    cout << "enter num2 : ";
    cin >> b;

    cout << "enter the operator : ";
    cin >> op;

    switch(op){

        case '+' : cout << "ADDITION : " << a + b << endl;
                    break;
        
        case '-' : cout << "SUBTRACTION : " << a - b << endl;
                    break;

        case '*' : cout << "MULTIPLICATION : " << a * b << endl;
                    break;

        case '/' : cout << "DIVISION : " << a / b << endl;
                    break;

        case '%' : cout << "MODULUS : " << a % b << endl; 
                    break;
        
        default : cout << "please enter a valid operation" << endl;

    }   */


   // good question to find number of notes of rs 100, 50, 20, 1 using switch statement.

    int amount;
    cin >> amount;

    int rs100, rs50, rs20, rs1;

    switch(1){
        case 1 :  rs100 = amount/100;
                      amount = amount % 100;
                      cout << "no of 100 rs notes are " << rs100 << endl;

        case 2 : rs50 = amount/50;
                    amount = amount % 50;
                    cout << "no of 50 rs notes are " << rs50 << endl;
        
        case 3 : rs20 = amount/20;
                    amount = amount % 20;
                    cout << "no of 20 rs notes are " << rs20 << endl;

        case 4 : rs1 = amount/1;
                 amount = amount % 1;
                 cout << "no of 1 rs notes are " << rs1 << endl;

    }  


}
