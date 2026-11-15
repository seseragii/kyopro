class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i = 0;
        for (i; i <= num; ++i) {
            long long int myonmyon = i * i;
            if (myonmyon == num) {
                return true;
            }
        }
        return false;
    }
};