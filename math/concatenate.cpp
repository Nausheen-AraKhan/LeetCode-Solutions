class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        int sum=0;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem;
            if(rem!=0)
               ans=ans*10+rem;
            n/=10;
        }
        long long num=0;
        while(ans>0)
        {
            int rem1=ans%10;
            num=num*10+rem1;
            ans/=10;
        }
        return num*sum;
    }
};
