class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        int num[n];
        int j = 0;
        for (int i = 0; i < nums2.size(); i++) {
            if (nums2[i] < nums1[j]) {
                num[i] = nums2[i];
                num[i + 1] = nums1[j];
                j++;
            } else if (nums2[i] > nums1[j]) {
                num[i] = nums1[j];
                num[i + 1] = nums2[j];
                j++;
            } else {
                continue;
            }
        }
        int med1, med2;
        double median;
        if (n % 2 == 0) {
            med1 = n / 2;
            med2 = med1 - 1;
            median = (num[med1] + num[med2]) / 2.0;
            return median;
        } else {
            median = (int(num[n / 2]));
            return median;
        }
        return 0;
    }
};