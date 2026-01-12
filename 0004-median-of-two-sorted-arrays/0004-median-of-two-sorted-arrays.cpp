class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        int size1=nums1.size();

        int p1,p2;
        if(size1%2==0){
            p1=size1/2;
            p2=p1-1;
            double val1=nums1[p1];
            double val2=nums1[p2];
            return ((val1+val2)/2);
        }
        else{
            p1=(size1/2);
            double val1=nums1[p1];
            return val1;
        }
        return 0;
    }
};