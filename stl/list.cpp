#include<iostream>
#include<list>
using namespace std;
//doubly linked list use karke list stl banaya gaya hai
int main(){
    list<int> l;
    list<int> n(5,100);
    for(int i:n){
        cout << i << " ";
    }
    l.push_back(1);
    l.push_front(2);
    for(int i : l){
        cout << i << " ";
    }cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for(int i:l){
        cout << i << " ";
    }
    cout << "size of list : " << l.size() << endl;

}