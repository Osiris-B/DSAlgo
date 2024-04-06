#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;

        int l = i+1;
        int r = n-1;
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum>0){
                r--;
            } else if(sum<0){
                l++;
            } else{
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;
                while(l<r && nums[l] == nums[l-1]) l++;
                while(l<r && nums[r] == nums[r+1]) r--;
            }
        }
    }

    for(auto i:ans){
        for(auto num: i){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}