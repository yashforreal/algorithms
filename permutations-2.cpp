#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> &nums, vector<vector<int>> &res, int idx){
    if(idx == nums.size()) {
        res.push_back(nums);
        return;
    }

    for(int i=idx; i<nums.size(); i++){
        int temp = nums[i];
        nums[i] = nums[idx];
        nums[idx] = temp;
        permute(nums, res, idx+1);
        temp = nums[i];
        nums[i] = nums[idx];
        nums[idx] = temp;
    }
}

int main(){
    vector<vector<int>> res;
    vector<int> nums = {1,2,3};
    permute(nums, res, 0);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
    return 0;
}