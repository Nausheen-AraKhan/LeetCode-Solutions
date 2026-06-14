class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int i=0,j=height.size()-1;
        int maxvol=0,vol;
        while(i!=j)
        {
             int lp=height[i],rp=height[j];
             vol=(j-i)*min(lp,rp);
             maxvol=max(maxvol,vol);
             if(lp<rp)
             {
                i++;
             }
             else
             {
                j--;
             }
        }
        return maxvol;
    }
};
































