#include<iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter the amount : " << endl;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;
    switch(1){
        case 1 : Rs100 = amount/100;
                amount = amount%100;
                cout << amount << endl;
                cout << "no of 100 rupee notees required are : " << Rs100 << endl;
        case 2 : Rs50 = amount/50;
                 amount = amount % 50;
                 cout << amount << endl;
                 cout << "no of 50 rupee notes required are : " << Rs50 << endl;
        case 3 : Rs20 = amount/20;
                amount = amount%20;
                cout << amount << endl;
                cout << "no of 20 rupees notes reuired are : " << Rs20 << endl;
        case 4: Rs1 = amount/1;
                amount = amount%1;
                cout << amount << endl;
                cout << "no of 1 rupees notes required are" << Rs1 << endl;


    }

}