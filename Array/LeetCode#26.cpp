class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
        {
            return 0;
        }
        int count = 0;
        int i = 0;
        for(int j = 1; j < size; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
            else
            {
                i++;
                nums[i] = nums[j];
            }
         
        }
        count = size - count;
        return count;

    }
};
