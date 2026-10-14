class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)
           return "";
        string ans="";
        while(num>0) {
            int d=min(9,sum); 
            ans+=char(d+'0');
            sum-=d;
            num--;
        }
        return ans;
    }
};