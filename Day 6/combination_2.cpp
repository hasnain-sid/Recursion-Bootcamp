class Solution {
public:
    void combi(vector<int>& c, int tg, vector<vector<int>>& ans, int ind, int k,vector<int>& subset)
    {
        if(k > tg)
            return;
        if(k == tg)
        {
            ans.push_back(subset);
            return;
        }
        if(ind >= c.size())
            return;

        // take
        k += c[ind];
        subset.push_back(c[ind]);
        combi(c,tg,ans,ind+1,k,subset);
        k-= c[ind];
        subset.pop_back();
        // We have chances of repeating subset in not take case 
        // that's why we have used while loop before N.T. Condition.
        // skip
        while(ind+1 < c.size() and c[ind] == c[ind+1]) ind++;
        combi(c,tg,ans,ind+1,k,subset);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>> v;
        vector<int> subset;
        sort(c.begin(),c.end());
        combi(c,t,v,0,0,subset);
        
        return v;
        
    }
};