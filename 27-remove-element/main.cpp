class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int8_t k = 0;
        for(auto const & i : nums){
            if(i != val){
                nums[k] = i;
                k++;
            }
        }
        return k;
    }
};
