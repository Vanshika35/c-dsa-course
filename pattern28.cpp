#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int space = row-1;
        while(space){
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        int value = row;
        while(col <= n - row + 1){
            cout << value;
            value = value + 1;
            col = col + 1;
            
        }
        cout << endl;
        row = row + 1;
    }
}