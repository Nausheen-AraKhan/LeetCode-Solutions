class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(),s.end());
        int n=s.length();
        string ans(n,' ');
        int l=0,r=n-1;
        int i=0;
        while(i+1<n)
        {
            if(s[i]==s[i+1])
            {
                ans[l++]=s[i];
                ans[r--]=s[i+1];
                i+=2;
            }
            else
            {
                ans[n/2]=s[i];
                i++;
            }
        }
        if(i<n)
           ans[n/2]=s[i];
        return ans;
    }
};
