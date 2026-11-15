class Solution {
public:
    int mySqrt(int x) {
        unsigned int ans = 0;
        for (unsigned int i = 0; i <= x; ++i) {
            long long sq = 1LL * i * i;
            if (sq <= x) {
                ans = i;
            } else {
                break;
            }
        }
        return ans;
    }
};