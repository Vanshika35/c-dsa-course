#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int cnt = 1;
        for(int i = 1; i < n;  i++){
            if(nums[i] != nums[j]){
                nums[j+1] = nums[i];
                cnt++;
            }
        }
        return cnt;
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
}