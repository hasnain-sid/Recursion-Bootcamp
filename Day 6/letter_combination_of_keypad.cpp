class Solution {
public:
    vector<string> ans; 
    void helper(vector<string> &v,string &digits,int ind,string &output)
    {
        
        if(output.size() == digits.size())
        {
            ans.push_back(output);
            return;
        }
        int x = digits[ind]-'0' - 2;
        string tmp = v[x];
        for(int i = 0; i < tmp.length(); i++)
        {
            output.push_back(tmp[i]);
            helper(v,digits,ind+1,output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return ans;
        vector<string> v={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;
        helper(v,digits,0,output);
        return ans;


    }
};

