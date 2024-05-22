#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
//     v.push_back();

    cout << "finding 6 -> " <<binary_search(v.begin(),v.end(), 6) << endl;
    cout << "finding lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin() << endl;
    cout << "finding upper bound " << upper_bound(v.begin(),v.end(), 6) - v.begin() << endl;
    int a = 5;
    int b = 10;
    swap(a,b);
    cout << "swap function -> " <<  a << " " << b << endl; 

    string abcd = "abcd";
    cout << "reversing a string using reverse fucntion`" << endl;
    reverse(abcd.begin(),abcd.end());
    cout << abcd << endl;
    cout << "rotating the elements in vectors" << endl;
    rotate(v.begin(),v.begin()+1, v.end());
    for(auto i: v ){
        cout << i << " ";
    }
    cout << "sorting the elements using sort function " << endl;
    // whats the working behind this sort function. it is based on intro sort
    //introsort-> is made with combination of three algorithms quick sort, heap sort and insertion sort and this introsort is working behind the scene of this sort function
    sort(v.begin(),v.end());
    for(int i : v){
        cout << i << " ";
    }
 }