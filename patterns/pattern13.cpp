#include<iostream>
using namespace std;

int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
int n;
cin >> n;
int row = 1;
while(row <= n){
    int col = 1;
    while(col <= n){
        char ch = 'A'+ row - 1;
        cout << ch << " ";
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
}

}