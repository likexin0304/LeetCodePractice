class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        int size = nums.size();
        for(int i = 0; i <  size; i++)
        {
            int newIndex = abs(nums[i]) - 1;
            if(nums[newIndex] > 0)
            {
                nums[newIndex] = nums[newIndex] * -1;
            }
        }
        for(int i = 1; i <= size; i++)
        {
            if(nums[i-1] > 0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
