#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    while(s <= e){
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        e--;
    }
    return v;
}
void print(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}

int main(){
    
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    cout << "printing reverse array" << endl;
    print(ans);

    return 0;
}