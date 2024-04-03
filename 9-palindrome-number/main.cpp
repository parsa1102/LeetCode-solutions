long long e[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};





class Solution {
public:
    bool isPalindrome(int x) {
        int stunt = x;
        long long reverse = 0;
        int digitCount = 0;
        while(x > 0){
            x/=10;
            digitCount ++;
        }
        x = stunt;
        for(int pw = digitCount - 1 ; pw>=0;pw --){
            long long tmp = x%10;
            reverse += (tmp * e[pw]);
            x/=10; 
        }
        return (stunt == reverse);
    }
};
