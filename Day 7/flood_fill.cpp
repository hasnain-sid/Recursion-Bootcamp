class Solution {
public:
    void helper(vector<vector<int>>& image, int i, int j, int oldColour,int newColour)
    {
        if(j >= image[0].size() or i >= image.size() or i < 0 or j < 0 )
        {
            return;
        }
        if(image[i][j]==oldColour)
        {
            image[i][j] = newColour;
        }
        else
            return;
            
        helper(image,i+1,j,oldColour,newColour);
        helper(image,i,j+1,oldColour,newColour);
        helper(image,i-1,j,oldColour,newColour);
        helper(image,i,j-1,oldColour,newColour);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int oldColour = image[sr][sc];
        
        int newColour = color;
        if(oldColour == newColour)
            return image;
        helper(image,sr,sc,oldColour,newColour);
        return image;
    }
};