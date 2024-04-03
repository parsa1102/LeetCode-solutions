class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0)return 0;
        long long L = -(1ll<<31);
        long long R = (1ll<<31);
        cout<<L<<'\n';
        if(dividend == L && divisor == -1){
            return R - 1;
        }
        int sgn  = 1;
        if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
            sgn = -1;
        }
        long long dividend1 = dividend;
        dividend1 = max(dividend1 , -dividend1);
        long long divisor1 = divisor;
        divisor1 = max(divisor1, -divisor1);
        while(L +1 < R){
            cout<<L << " "<< R << '\n';
            long long mid = (L+R) /2;
            if(divisor1 * mid > dividend1){
                R = mid ;
            }
            else{
                L = mid;
            }
        }
        if(R * divisor1 < dividend1 +1){
            return sgn * R;
        }
        return sgn * L;
    }
};
