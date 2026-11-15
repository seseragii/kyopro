class Solution {
public:
    bool checkPerfectNumber(int num) {
        int factorsum = 0;

        for(unsigned int i=1; i<num; ++i){
            if(num%i==0){
                factorsum +=i;
            }
        }

        if(factorsum==num){
            return true;
        }
        else{
            return false;
        }
    }
};