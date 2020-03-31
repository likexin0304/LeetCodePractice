class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //initial an array
        vector<int>obj;
        // get the array size
        int size = nums.size();
        // calculate the answ
        for(int i = 0; i < size; i++)
        {
            for(int j = i+1; j < size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    obj.push_back(i);
                    obj.push_back(j);
                    return obj;
                }
            }
        }
        return obj;
    }
    // Time complexity: O(n^2)
};
