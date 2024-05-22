#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){

            int count = 0;

            for(int j = i; j < nums.size(); j++){

                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count == 2){
                ans.push_back(nums[i]);
            }
        }
        return ans;
                
    }

int main(){
    
}