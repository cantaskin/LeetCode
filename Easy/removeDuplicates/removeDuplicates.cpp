class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        std::vector<int>::iterator temp = nums.begin();
        int tempnum;
        for(std::vector<int>::iterator it = temp; it != nums.end(); )
        {
            
            if(it == nums.begin())
            {
                tempnum = *nums.begin();
                it++;
            }
            else if(*it == tempnum)
            {
                tempnum = *it;
                temp = it + 1;
                nums.erase(it);
            }
            else
            { 
                tempnum = *it;   
                it++;
            }
        }
        return nums.size();
    }
};