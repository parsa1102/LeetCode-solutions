class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int16_t L = -1;
        int16_t R = nums.size() - 1;
        while(L+1 < R){
            int mid = (L+R) / 2;
            if(nums[mid] < target){
                L = mid;
            }
            else{
                R = mid;
            }
        }
        if(nums[R] < target){
            return R + 1;
        }
        return R;
    }
};
