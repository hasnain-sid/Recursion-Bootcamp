class Solution {
public:
    vector<vector<int>> ans;
    void prem(vector<int>& nums,int i)
    {
        if(nums.size() == i)
        {
            return ans.push_back(nums);
        }
        for(int j = i; j < nums.size(); ++j)
        {
            swap(nums[i],nums[j]);
            prem(nums,i+1);
            swap(nums[i],nums[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        prem(nums,0);
        return ans;
    }
};