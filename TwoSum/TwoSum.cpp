#include <vector>
#include <iostream>
#include <string>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

    std::vector<int> res;
     for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
     {
         for(std::vector<int>::iterator counter = it + 1; counter != nums.end(); counter++)
         {
             if((*it + *counter) == target)
            {
                res.push_back(it - nums.begin());
                res.push_back(counter - nums.begin());
                return(res);
            }
         }
     }   
     return res;
    }
};

int main()
{
    Solution a;
    std::vector<int> res =  {0,1,2,3,4};
    std::vector<int> sol = a.twoSum(res,6);
    std::cout << std::to_string(sol[0]) << " " << std::to_string(sol[1]);
}