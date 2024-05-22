#include <iostream>
using namespace std;

int SumOfArrayElements(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}
int main() {
  int size;
  cin >> size;

  int nums[50];
  // taking input of array elements
  for (int i = 0; i < size; i++) {
    cin >> nums[i];
  }
  cout << endl;
  cout << "sum of all the elements in the array is : "
       << SumOfArrayElements(nums, size) << endl;
}