class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        auto s = countAndSay(n -1);
        s = s + "&";
        string ret;
        int cnt = 1;
        for(int i = 1 ;i<s.size();i++){
            if(s[i] != s[i-1]){
                ret = ret + std::to_string(cnt) + s[i-1];
                cnt = 1;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        return ret;
    }
};
