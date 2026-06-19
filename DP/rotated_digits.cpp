class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            int number=i;
            int answer=0;
            while(number>0)
            {
                int rem=number%10;
                if(rem==3||rem==4||rem==7)
                  { answer=0;
                   break;
                  }
                if(rem==2||rem==5||rem==6||rem==9)
                   answer=1;
                 number/=10;
            }
            count+=answer;

        }
        return count;
    }
};

    
        
