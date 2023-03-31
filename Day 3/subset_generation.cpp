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
        // iTH element not in subset
        generate(subsets, i+1 , num);

        //iTH element in subset
        subsets.push_back(num[i]);
        generate(subsets, i+1 , num);
        subsets.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& num) {
        vector<int> empty;
        generate(empty, 0 , num);
        return all_subsets;
        
    }
};