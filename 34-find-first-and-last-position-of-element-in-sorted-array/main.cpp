class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int retL = -1;
        int retR = -1;
        int L = 0;
        int R = nums.size();
        while(L+1 < R){
            int mid = (L+R) / 2;
            if(nums[mid] > target){
                R = mid;
            }
            else{
                L = mid;
            }
        }
        retR = L;
        L = -1;
        R = nums.size() - 1;
        while(L+1 < R){
            int mid = (L+R) / 2;
            if(nums[mid] < target){
                L = mid;
            }
            else{
                R = mid;
            }
        }
        retL = R;
        if(retL == -1)return {-1, -1};
        if(nums[retL] != target)return {-1, -1};
        return {retL, retR};
    }
};
