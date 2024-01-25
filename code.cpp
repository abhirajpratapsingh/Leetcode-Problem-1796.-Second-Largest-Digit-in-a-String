class Solution {
public:
    int secondHighest(string s) 
    {
        int large=-1;
        int secLarge=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                if(s[i]-'0'>large)
                {
                    secLarge=large;
                    large=s[i]-'0';
                }
                else if(s[i]-'0'>secLarge && (s[i]-'0') !=large )
                    secLarge=s[i]-'0';
            }
        }
        if(large==secLarge || secLarge==INT_MIN)
            return -1;
        return secLarge;
    }
};
