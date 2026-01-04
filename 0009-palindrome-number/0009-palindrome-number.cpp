class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int num = x;
        if (x >= 0 && x < 10) {
            return 10;
        } else if (x > 0) {
            long long int reversed_num = 0;
            while (num > 0) {
                long long int digit = num % 10;
                reversed_num = reversed_num * 10 + digit;
                num = num / 10;
            }
            if (x == reversed_num) {
                return true;
            } else {
                return false;
            }
        }
        return 0;
    }
};