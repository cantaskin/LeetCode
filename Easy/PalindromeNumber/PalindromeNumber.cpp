class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str = to_string(x);
        std::string rstr;
        for(std::string::iterator it = str.end()-1; it != str.begin()-1; it--)
            rstr += *it;
        if(str == rstr)
            return true;
        return false;
        
    }
};