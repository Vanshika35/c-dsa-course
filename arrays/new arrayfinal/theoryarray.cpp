#include<iostream>

using namespace std;

void printArray(char arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

}


int main(){
    // int number[5];

    // fill_n(number, 5, 1);

    // for(int i = 0; i < 5; i++){
    //     cout << number[i] << " ";
    // }

    // int number[15];

    // cout << number[20];

    // int second[3] = {5, 7, 11};

    // cout << second[2];

    // int third[15] = {2, 3};

    // for(int i = 0; i < 15; i++){
    //     cout << third[i] << " ";
    // }

    // cout << endl;

    // int fourth[10] = {0};

    // for(int i = 0; i <10; i++){
    //     cout << fourth[i] << " ";
    // }

    // cout << endl;

    int fifth[10] = {1};

    for(int i = 0; i <10; i++){
        cout << fifth[i] << " ";
    }
    cout << endl;
    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << fifthsize;

    cout << endl;

    char ch[5] = {'a', 'e', 'i', 'o', 'u'};
    cout << ch[3] << " " << ch[1] << " " << ch[0] << " "; 

    cout << endl;

    printArray(ch, 5);

    cout << endl;  

    double firstDouble[5];
    float firstFloat[6];

    bool firstBool[4];

    cout << "everything is fine";

}