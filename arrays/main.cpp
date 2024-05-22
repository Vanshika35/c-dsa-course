#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

  cout << "printing an array " << endl;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "printing done" << endl;
}

int main() {
  // declaring the array
  int number[15];

  cout << endl << "Value at 0th index " << number[0] << endl;

  // initialising an array
  int second[3] = {5, 7, 11};

  // accessing an element

  cout << "value at 2nd index " << second[2] << endl;

  int third[15] = {2, 7};
  // printArray(third, 15);
  int thirdSize = sizeof(third) / sizeof(int);
  cout << "size of third is " << thirdSize << endl;

  // // "print the array"
  // for(int i = 0; i < 15; i++){
  //   cout << third[i] << " ";
  // }
  // cout << endl;
  // initialising an array with all zeroes
  int fourth[10] = {0};
  // printArray(fourth, 10);
  //  for(int i = 0; i < 10; i++){
  //    cout << fourth[i] << " ";
  //  }
  //  cout << endl;
  //  initialising all location with 1[not possible with below //line
  int fifth[15] = {1};
  // printArray(fifth, 15);

  int fifthSize = sizeof(fifth) / sizeof(int);
  cout << "size of fifth is " << fifthSize << endl;

  // for(int i = 0; i<15; i++){
  //   cout << fifth[i] << " ";
  // }

  char ch[5] = {'a', 'b', 'c', 'd', 'e'};
  cout << ch[3] << endl;
  cout << "printing an array " << endl;

  for (int i = 0; i < 5; i++) {
    cout << ch[i] << " ";
  }
  cout << endl;
  cout << "printing done" << endl;

  double firstDouble[5];
  float firstFloat[6];
  bool firstBool[9];

  cout << endl << "Everything is fine " << endl << endl;
}