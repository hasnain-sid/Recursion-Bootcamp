class Solution {
public:
    vector<vector<int>> ans;
    void prem(vector<int>& nums,int i)
    {
        if(nums.size() == i)
        {
            return ans.push_back(nums);
        }
        unordered_set<int> xo;
        for(int j = i; j < nums.size(); ++j)
        {
            if(xo.find(nums[j]) != xo.end()) continue;
            xo.insert(nums[j]);
            swap(nums[i],nums[j]);
            prem(nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        prem(nums,0);
        return ans;
    }
};