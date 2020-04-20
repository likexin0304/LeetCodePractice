class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i = 0; i < numRows; i++)
        {
            result[i] = vector<int>(i+1,0);
            result[i][0] = 1;
            result[i][i] = 1;
        }
        if(numRows <= 2)
        {
            return result;
        }
        for(int i = 2; i < numRows; i++)
        {
            for(int j = 1; j < result[i].size() - 1; j++)
            {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }


        return result;
        
    }
};
