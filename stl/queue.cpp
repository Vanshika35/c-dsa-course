#include<iostream>
#include<queue>
using namespace std;

int main(){
    //we can relate it with line joh line main pehele lagta hai uskin pehele bari aati hai, means first in first out(fifo)
    //FIFO
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");
     cout << "size before pop-> " << q.size() << endl;
    cout << "first element-> " << q.front() << endl;
    q.pop();
    cout << "first element-> " << q.front() << endl;
    cout << "size after pop-> " << q.size() << endl;

}