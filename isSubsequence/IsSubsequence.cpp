class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t index = 0;
        std::string::iterator tempitt = t.begin(); 
        for(std::string::iterator its = s.begin(); its != s.end(); its++)
        {
            for(std::string::iterator itt = tempitt; itt != t.end(); itt++)
            {
                if(*itt == *its)
                {
                    index++;
                    tempitt = itt + 1;
                    break;
                }
            }
        }
        if(index == s.size())
            return true;
        return false;
    }
};