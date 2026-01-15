class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int size = s.size();
        int right = size - 1;
        while (left < right) {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            
            left++;
            right--;
        }
    }
};