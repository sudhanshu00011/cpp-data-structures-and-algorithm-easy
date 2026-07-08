class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        while (i<m+j && j<n) {
            if (nums1[i]<nums2[j]) {
                i++;
            }
            else if (nums1[i]>=nums2[j]) {
                nums1.insert(nums1.begin() + i, nums2[j]);
                nums1.pop_back();
                i++;
                j++;
            }
        }
        while (j < n) {
            nums1[m + j] = nums2[j];
            j++;
        }
    }
    
};
