class Solution {
public:
    vector<vector<int>> ans;
    void combination(vector<int> &nums,vector<int> &output,int ind,int target,int sum,int k)
    { 
        
        if(target==sum and output.size() == k)
        {
            ans.push_back(output);
            return;
        }
        else if(sum > target)
        {
            return;
        }
        else if(ind >= nums.size())
        {
            return;
        }
        
                
        //take
        int element = nums[ind];
        sum += element;
        output.push_back(element);
        combination(nums,output,ind+1,target,sum,k);
        // BACKTRACKING STEP
        sum -= element; 
        output.pop_back();

        // not take
        combination(nums,output,ind+1,target,sum,k);
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> output;
        combination(nums,output,0,target,0,k);
        return ans;
    }
};