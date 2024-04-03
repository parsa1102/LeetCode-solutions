
class Solution {
    public : int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        if(needle.size()>haystack.size())
            return -1;
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            int k=0;
            for(int j=0;j<needle.size();j++){
                if(needle[j]==haystack[i+j]){
                    k++;
                }
                else 
                    break;
            }
            if(k==needle.size())
                return i;
        }
        return -1;
    }
};
