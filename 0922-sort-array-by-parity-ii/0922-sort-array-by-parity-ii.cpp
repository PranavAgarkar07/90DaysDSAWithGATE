class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size = nums.size();
        vector<int> even;
        vector<int> odd;
        vector<int> result;
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);

            } else {
                odd.push_back(nums[i]);
            }
        }
        int size2=even.size();
        int evP=0;
        int oddP=0;
        for(int i=0;i<size;i++){
            
            if(i%2==0){
                result.push_back(even[evP]);
                evP++;
            }
            else{
                result.push_back(odd[oddP]);
                oddP++;
            }
        }
        return result;
    }
};