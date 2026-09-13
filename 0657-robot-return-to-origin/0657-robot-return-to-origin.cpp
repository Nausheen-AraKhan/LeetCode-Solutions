class Solution {
public:
    bool judgeCircle(string moves) {
        int m=0,n=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
               m++;
            if(moves[i]=='R')
               m--;
            if(moves[i]=='U')
               n++;
            if(moves[i]=='D')
               n--;
        }
        if(m==0 && n==0)
           return true;
        return false;
    }
};