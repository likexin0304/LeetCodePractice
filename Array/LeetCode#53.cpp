class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int sum1;

        for(int i = 0; i < nums.size(); i++)
        {
            sum1 = nums[i];
            if( sum < sum1)
            {
                sum = sum1;
            }
            for(int j = i + 1; j < nums.size(); j++)
            {
                sum1 = sum1 + nums[j];
                if(sum <  sum1)
                {
                    sum = sum1;
                }
            }
            
        }
        return sum;
    }
};
