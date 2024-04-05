class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(auto const & ap : apple){
            sum += ap;
        }
        sort(capacity.begin(), capacity.end());
        //reverse(capacity.begin(), capacity.end());
        int ans = 0;
        for(int i = capacity.size() -1 ;i>=0 ;i--){
            int const & cp = capacity[i];
            ans ++;
            if(cp >= sum){
                return ans;
            }
            sum -= cp;
        }
        return capacity.size();
    }
};
