class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<size-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }else{
                continue;
            }
        }
    return false;
    }
};