class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        for(int i = s.size()  -1 ; i >= 0;i --){
            if(s[i] == ' '){
                if(ret != 0)return ret;
                ret =0;
                continue;
            }
            ret ++;
        }
        return ret;
    }
};
