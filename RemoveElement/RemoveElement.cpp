class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        std::vector<int>::iterator temp = nums.begin();
        for(std::vector<int>::iterator it = temp; it != nums.end(); )
        {
            if(*it == val)
            {
                temp = it + 1;
                nums.erase(it);
            }
            else
                it++;

        }
        return nums.size();
    }
};