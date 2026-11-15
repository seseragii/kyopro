class Solution {
public:
    int removeDuplicates(vector<int> &nums){
    int size = nums.size();
    int k=0;
    vector<int> unique;
    for(int i=-100; i<=100; i++){
        bool repeated =false;
        for(int j=0; j<size; j++){
            if(nums.at(j)==i && !repeated){
                repeated = true;
                unique.push_back(i);
                k++;
            }
        }
    }
    nums = unique;
    return k;
}
};