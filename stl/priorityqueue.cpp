#include<iostream>
#include<queue>
using namespace std;

//priority queue-> apne ek aise queue banadi jiska first element greatest hoga->hum max heap kmi baat kar rahe hai
int main(){
    //max heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int,vector<int>, greater<int> > mini;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size-> " << maxi.size() << endl;
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(4);
    mini.push(2);
    mini.push(3);
    cout << "mini size-> " << mini.size() << endl;
    int m = mini.size();
    for(int i = 0; i < m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "arre khali hai kya bhai ??? -> " << maxi.empty() << endl;
    

}