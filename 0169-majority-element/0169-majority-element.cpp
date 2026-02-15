class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for (int num : nums) {
            mp[num]++;
        }

        int maxCount = 0;
        int result = -1;

        for (const auto& [element, count] : mp) {
            if (count > maxCount) {
                maxCount = count;
                result = element;
            }
        }

        return result;

    }
};