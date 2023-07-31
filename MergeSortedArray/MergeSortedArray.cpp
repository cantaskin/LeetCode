class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int> nums3;
        for(size_t i = 0; i < m; i++)
            nums3.push_back(nums1[i]);
        for(size_t i = 0; i < n; i++)
            nums3.push_back(nums2[i]);
        nums1.clear();
        sort(nums3.begin(),nums3.end());
        for(std::vector<int>::iterator it = nums3.begin(); it != nums3.end(); it++)
            nums1.push_back(*it);
    }
};