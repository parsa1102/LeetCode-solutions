//char ac[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '+'};

class Solution {
public:
    int myAtoi(string s) {
        long long tmpmx = (1ll<<31) - 1;
        long long tmpmn = -(1ll<<31);
        int mx = tmpmx;
        int mn = tmpmn;
        //cout<<mn<<'\n';
        int i = 0;
        int sgn = 1;
        while(i < s.size()){
            if(s[i] >= '0' && s[i] <= '9'){
                break;
            }
            else if(s[i] == '-' || s[i] == '+' ){
                if(s[i] == '-'){
                    sgn = -1;
                }
                i++;
                break;
            }
            else if(s[i] != ' '){
                return 0;
            }
            i ++;
        }
        string ret = "";
        bool nonzero = false;
        while(i < s.size()){
            if(s[i] >= '1' && s[i] <= '9'){
                ret += s[i];
                nonzero = true;
                i++;
            }
            else if(s[i] == '0'){
                if(nonzero){
                    ret += s[i];
                }
                i++;
            }
            else{
                break;
            }
        }
        if(ret.size() > 11){
            if(sgn == -1){
                return mn;
            }
            else{
                return mx;
            }
        }
        long long ans = 0;
        long long pw = 1;
        for(int i = ret.size() - 1 ;i >=0; i--){
            long long tmp = pw * (ret[i] - '0');
            ans += tmp;
            pw *= 10;
        }
        ans *= sgn;
        if(ans > tmpmx){
            return mx;
        }
        if (ans < tmpmn){
            return mn;
        }
        cout<<"parsa is here \n";
        return ans;
    }
};
