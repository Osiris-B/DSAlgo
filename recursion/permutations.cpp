// Given an array nums of distinct integers, return all the possible permutations.
// You can return the answer in any order

#include<bits/stdc++.h>
using namespace std;

void permute(int idx, vector<int> &nums, vector<vector<int>> &ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = idx;i<nums.size();i++){
        swap(nums[idx], nums[i]);
        permute(idx + 1, nums, ans);
        swap(nums[idx], nums[i]);
    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;

    permute(0, nums, ans);

    for(vector<int> &vec : ans){
        for(int i : vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

