class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0)
        {
            swap(nums1,nums2);
            return;
        }
        int new_idx = m+n-1, i = m-1, j = n-1;
        while(new_idx >= 0 && j >= 0 && i >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[new_idx] = nums1[i];
                --new_idx; --i;
            }else{
                nums1[new_idx] = nums2[j];
                --new_idx; --j;
            }
        }
        while(j >= 0){
            nums1[new_idx] = nums2[j];
            --new_idx; --j;
        }
        while(i >= 0){
            nums1[new_idx] = nums1[i];
            --new_idx; --i;
        }


        
    }
};
