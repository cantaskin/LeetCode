
class Solution {
public:
    bool isPalindrome(string s) 
    {
        std::string str;
        for(std::string::iterator it = s.begin(); it != s.end(); it++)
            *it = tolower(*it);
       for(std::string::iterator it = s.begin(); it != s.end(); it++)
        {
                if(isalnum(*it))
                {
                    str += *it;
                }
                else
                    ;
        }
        size_t index = 0;
        for(int i = str.size() - 1; i != -1 ; i--)
        {


            if(str[index] == str[i])
                index++;
        }
        if(index == str.size())
            return true;
        return false;
    }
};