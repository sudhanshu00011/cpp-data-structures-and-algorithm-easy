class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) swap(nums1, nums2);
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> ans;
        for (int num : nums2) {
            if (s.count(num)) {
                ans.insert(num);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};
