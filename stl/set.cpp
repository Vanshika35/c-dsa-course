#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(9);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    for(auto i : s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++; 
    s.erase(it);
    for(auto i : s){
        cout << i << " ";
    }cout << endl;
    // tells whether that number is present in set or not
    cout << "tell me whether 5 is present in set or not:)?? "; 
    cout << s.count(5);
    //find func-> agar element mil jata hai set ke undar toh uska iterator return kar deta hai
    set<int>::iterator itr = s.find(5);
    cout << "value present at it-> " << *itr << endl;
    //insert, find, erase and count -> O(logN)
    //size,begin,end and empty - > O(1)
}