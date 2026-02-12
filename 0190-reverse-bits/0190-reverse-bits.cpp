class Solution {
public:
    int reverseBits(int n) {
        std::bitset<32> bits(n);
        string A = bits.to_string();

        int l = 0, r = 31;
        while (l < r) {
            char temp = A[l];
            A[l] = A[r];
            A[r] = temp;
            l++; r--;
        }
        unsigned long num = std::bitset<32>(A).to_ulong();

        return num;
    }
};