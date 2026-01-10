class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int pL=0,pF=1;
        // erase(my_vector.begin() + 1) 
        while(pF<size){
            if(nums[pL]!=nums[pF]){
                pL++;
                nums[pL]=nums[pF];
            }
            pF++;
        }
        return pL+1;
    }
};