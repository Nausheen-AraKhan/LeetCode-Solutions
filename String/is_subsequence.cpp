class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=s.length(),t1=t.length();
        int l=0,r=0;
        while(l<s1 && r<t1)
        {
            if(s[l]==t[r])
             {  l++;
               r++;
             }
            else
               r++;
            
        }
        return (l==s1);
        

    }
};
