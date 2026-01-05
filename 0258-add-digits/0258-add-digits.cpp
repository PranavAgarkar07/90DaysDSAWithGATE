class Solution {
public:
    int reminder(int n) {
        int newR;
        int sum = 0;
        if(n>=10) {
            while (n != 0) {
                int rem = n % 10;
                sum = sum + rem;
                n = n / 10;
            }
            return reminder(sum);
            // newR=sum;
        }
        else{
            return n;
        }
        return n;
    }
    int addDigits(int num) { return reminder(num);}
};