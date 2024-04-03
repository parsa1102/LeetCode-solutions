
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           map<int, int> mp;
           for(int i = 0;i <nums.size();i++){
               mp[nums[i]] = i+1;
           }
           for(int i = 0 ;i< nums.size();i++){
               if(mp[target - nums[i]] != 0 && mp[target - nums[i]] - 1 != i){
                   return {mp[target - nums[i]] - 1, i};
               }
           }
           return {};
    }
};
