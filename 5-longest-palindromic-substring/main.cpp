class Solution {
public:
    string longestPalindrome(string s) {
        s = "&" + s + "$";
        int ansLen = 0;
        int L = -1;
        int R = -1;
        for(int i = 1; i<s.size() - 1;i++){
            int j = 0;
            while(true){
                if(i -j < 0 || i+j > s.size() -1){
                    break;
                }
                //cout<<"j : " << j <<'\n';
                if(s[i-j] == s[i+j]){
                    if(2*j + 1 > ansLen){
                        //cout<<"hello\n";
                        ansLen = 2*j +1;
                        L = i-j;
                        R = i+j;
                    }
                }
                else{
                    break;
                }
                j++;
            }
            j = 0;
            while(true){
                if(i - j - 1 < 0 || i+j > s.size()-1){
                    break;
                }
                if(s[i - j - 1] == s[i + j]){
                    if((j+1) * 2 > ansLen){
                        ansLen = (j+1) * 2;
                        L = i-j-1;
                        R = i+j;
                    }
                }
                else{
                    break;
                }
                j++;
            }
        }
        string ret = "";
        for(int i = L ;i<=R;i++){
            //cout<<i<<'\n';
            ret += s[i];
        }
        return ret;
    }
};
