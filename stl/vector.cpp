#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);
    cout << "printing vector a"<<endl;
    for(int i : a){
        cout << i << " ";
    }cout << endl;
    vector<int> b(a);
     cout << "printing vector b copy of a"<<endl;
    for(int i : a){
        cout << i << " ";
    }cout << endl;
    
    // size ka matlab abhi current kitne element hai iske andaar
    // capacity ka matlab total kitne element ke liye isko memory allocate hui padi hai
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
     v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout << "element at second index->" << v.at(2) << endl;
    cout << "first element in vector-> " << v.front() << endl;
    cout << "last element in vector-> " << v.back() << endl; 

    cout << "before popback"<<endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop_back operation"<<endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    // jab hum vector ko clear karte hai uss samah size zero hota hai capacity zero nahi hoti hai
    cout << "before clear size->" << v.size() << endl;
    v.clear();
    cout << "after clear size->" << v.size() << endl;
    cout << "after clear size capacity remains->" << v.capacity() << endl;

}