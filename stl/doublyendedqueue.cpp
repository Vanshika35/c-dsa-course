#include<iostream>
#include<deque>
using namespace std;
//dedqueue-> dynamic in nature, complex implementation, we can insert and delete from both the ends that is starting and ending   
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // cout << d[0] << " " << d[1] << endl;
    for(int i : d){
        cout << i << " ";
    }cout << endl;
    d.pop_back();
    for(int i : d){
        cout << i <<endl;
    }
    d.push_back(4);
    d.push_front(9);
    cout << "printing elements in deque->" << endl;
    for(int i : d){
        cout << i << " ";
    }cout << endl;
    d.pop_front();
    for(int i : d){
        cout << i << " ";
    }
    cout << "front ->" << d.front() << endl;
    cout << "back-> " << d.back() << endl;
    cout << "printing first index element -> " << d.at(1) << endl;
    cout << "empty-> " << d.empty() << endl;
    cout << "before erasing-> " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "after erasing-> " << d.size() << endl;
    for(int i : d){
        cout << i << " ";
    }
}