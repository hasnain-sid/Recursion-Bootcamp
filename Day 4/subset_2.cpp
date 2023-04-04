
class Solution {
public:
    vector<vector<int>> all_subsets;
    void generate(vector <int> &subsets, int i , vector <int> &num)
    {
        if (i == num.size())
        {
            all_subsets.push_back(subsets);
            return;
        }
        // iTH element in in subset
        subsets.push_back(num[i]);
        generate(subsets, i+1 , num);
        subsets.pop_back();
        //iTH element not subset
        while(i+1 < num.size() and num[i] == num[i+1]) i++; 
        generate(subsets, i+1 , num);
        

    }
    vector<vector<int>> subsetsWithDup(vector<int>& num) {
        vector<int> empty;
        sort(num.begin(),num.end());
        generate(empty, 0 , num);
        
        return all_subsets;
        
    }
};