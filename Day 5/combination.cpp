class Solution {
public:
    vector<vector<int>> ans;
    void combination(vector<int> &nums,vector<int> &output,int ind,int k)
    { 
        if(output.size()==k)
        {
            ans.push_back(output);
            return;
        }
        if(ind == nums.size())
        {
            return;
        }
          

        // not takeQ
        combination(nums,output,ind+1,k);


        // take
        int element = nums[ind];
        output.push_back(element);
        combination(nums,output,ind+1,k);
        output.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> output,nums;
        // vector<vector<int>> ans;
        int ind = 0;
        for(int i = 1; i <= n; i++) nums.push_back(i);
        combination(nums,output,ind,k);
        return ans;
    }
};