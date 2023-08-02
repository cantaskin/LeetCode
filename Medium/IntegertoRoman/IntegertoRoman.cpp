class Solution {
public:
    string intToRoman(int num) 
    {
        std::string Roman;
        while(num > 0)
        {
            if(num >= 1000)
            {
                num -= 1000;
                Roman += "M";
            }
            else if(num >= 900)
            {
                num -= 900;
                Roman += "CM";
            }
            else if(num >= 500)
            {
                num -= 500;
                Roman += "D";
            }
            else if(num >= 400)
            {
                num -= 400;
                Roman += "CD";
            }
            else if(num >= 100)
            {
                num -=100;
                Roman += "C";
            }
            else if(num >= 90)
            {
                num -= 90;
                Roman += "XC";
            }
            else if(num >= 50)
            {
                num -= 50;
                Roman += "L";
            }
            else if(num >= 40)
            {
                num -= 40;
                Roman += "XL";
            }
            else if(num >= 10)
            {
                num -= 10;
                Roman += "X";
            }
            else if(num >= 9)
            {
                num -= 9;
                Roman += "IX";
            }
            else if(num >= 5)
            {
                num -= 5;
                Roman += "V";
            }
            else if(num >= 4)
            {
                num -= 4;
                Roman += "IV";
            }
            else if(num >= 1)
            {
                num -= 1;
                Roman += "I";
            }
        }
        return Roman;
    }
};