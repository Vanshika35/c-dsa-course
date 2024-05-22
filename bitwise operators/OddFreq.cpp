
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {2, 3, 4, 1, 3, 4, 2, 3};
    vector<int> ans;
    unordered_map<int, int> mpp;
    for(int i = 0; i < 8; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second & 1 == 1){
            ans.push_back(it.second);
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    int arr2[9] = {2, 5,}
}