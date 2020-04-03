class Solution {
public:

    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int nozero = 0;
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != 0)
            {
                nums[nozero++] = nums[i];                
            }
        }
        for(int i = nozero; i < size; i++)
        {
            nums[i] = 0;
        }
    }
};
