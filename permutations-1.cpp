#include<bits/stdc++.h>
using namespace std;

void helper_permute(vector<int>& nums, vector<vector<int>> &res, unordered_map<int, int> m, vector<int> temp){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]] == 0){
                m[nums[i]] = 1;
                temp.push_back(nums[i]);
                helper_permute(nums, res, m, temp);
                temp.pop_back();
                m[nums[i]] = 0;
            }
        }
    }

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    unordered_map<int, int> m;
    vector<int> temp;
    helper_permute(nums, res, m, temp);
    return res;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> all_permutations = permute(nums);
    for(int i=0; i<all_permutations.size(); i++){
        for(int j=0; j<all_permutations[0].size(); j++){
            cout<<all_permutations[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}