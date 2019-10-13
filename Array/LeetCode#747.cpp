class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     vector<int>::iterator max = max_element(begin(nums), end(nums));
     int temp = 0;
        for( int i = 0; i < nums.size(); i++)
        {
            if( nums[i] != *max)
            {
                 temp = nums[i] * 2;
            }
           
            if( *max < temp )
            {
                return -1;
            }
        }
        return distance(begin(nums),max);
    }
};