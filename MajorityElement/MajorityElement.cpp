class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::pair<int,int> pr = {0,0};
        std::map<int,int> mp;
        for(auto i : nums)
        {
            mp[i]++;
            if(mp[i] > pr.second)
            {
                pr.second = mp[i];
                pr.first = i;
            }
        }
        return pr.first;
    }
};