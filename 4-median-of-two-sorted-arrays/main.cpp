class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int mid = (n + m) / 2;
        nums1.push_back(1e6 + 10);
        nums2.push_back(1e6+10);
        int i = 0;
        int j = 0;
        int last = -1;
        while(true){
            if(i + j == mid){
                if((n+m) % 2 == 0){
                    auto next = min(nums1[i], nums2[j]);
                    return double((double(last) + double(next)) / 2.0);
                }
                else{
                    auto next = min(nums1[i], nums2[j]);
                    return next;
                }
            }
            else{
                if(nums1[i] < nums2[j]){
                    last = nums1[i];
                    i++;
                }
                else{
                    last = nums2[j];
                    j++;
                }
            }
        }
    }
};
