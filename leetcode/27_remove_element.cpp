class Solution {
public:
    int removeElement(vector<int>&nums, int val){
        int size = nums.size();
        vector<int> not_val;
        int k=0;
            for(int j=0; j<size; j++){
                if(nums.at(j)!=val){
                    not_val.push_back(nums.at(j));
                    k++;
                }
            }
        nums = not_val;
        return k;
    }
};