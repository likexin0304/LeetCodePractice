class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> cnums;
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            cnums.push_back(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int j = 0;
        int x = size - 1;
        for(j; j < size; j++)
        {
            if( cnums[j] != nums[j])
            {
                break;
            }
        }
        for(x; x >= 0; x--)
        {
            if( cnums[x] != nums[x])
            {
                break;
            }
        }
        int count = x - j + 1;
        if( count < 0)
        {
            count = 0;
        }
        return count;
    }
};
