class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (unsigned int i=0; i < nums.size(); ++i) {
            for (unsigned int j=0; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target && i != j) {
                    return {static_cast<int>(i), static_cast<int>(j)};
                }
            }
        }
        return {};
    }
};