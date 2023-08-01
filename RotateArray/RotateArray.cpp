class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        std::vector<int> temp;
        k %= nums.size();
        int count = ((nums.size() - k) > 0) ? nums.size() - k : 0;
        if(count == 0) //slow and correct version
        { 
            for(int index = 0; index < k; index++)
            {
                temp.push_back(nums[nums.size()-1]);
                for(int i = 0 ; i < nums.size() -1; i++)
                    temp.push_back(nums[i]);
                nums.clear();
                nums = temp;
                temp.clear();
            }
        }
        else// fast and doesnt perfectly correct version
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(i >= count)
                    temp.push_back(nums[i]);
            }
            for(int i = 0; i < count; i++)
                temp.push_back(nums[i]);
        nums.clear();
        nums = temp;
        }
    }
};