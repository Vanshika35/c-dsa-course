#include<iostream>
#include<map>
using namespace std;

int main(){
    //map returns values in sorted order
    //insert, erase, find and count ->O(logN)
    //implementation of this map is through red-black tree or balanced tree
    //joh unordered_map hota hai uski implementation hoti hai hash table se and complexity is O(1) in best and avg andO(n) in worst case
    map<int, string> m;
    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";

    m.insert({5, "bheem"});
    cout << "before erase operation: " << endl;
    for(auto i : m){
        cout << i.first << "-> " << i.second << endl;
    }
    cout << "finding -13-> " << m.count(-13) << endl;

    cout << "after erase operation" << endl;
    m.erase(13);
    for(auto i : m){
        cout << i.first << "-> " << i.second << endl;
    }
    auto it = m.find(5);
    cout << (*it).first << endl;
    for(auto i = it; i!=m.end(); i++){
        cout << (*i).first << endl;
    }
}