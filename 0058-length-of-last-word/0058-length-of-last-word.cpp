class Solution {
public:
    int lengthOfLastWord(string s) {
        char space = ' ';
        int size = s.size();
        int right = size - 1;
        int i = 0;
        char j = ' ';

        while (right >= 0) {
            if (s[right] == ' ') {
                right--;
                // i++;
                if (j == '@') {
                    break;
                }
                // else{
                //     continue;
                // }
                continue;
            } else {
                j = '@';
                i++;
                right--;
                if (right >= 0 && s[right] == ' ') {
                    break;
                }
            }
        }

        int length = i;
        return length;
    }
};