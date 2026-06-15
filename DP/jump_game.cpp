class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>end)
               return false;
           end=max(end,i+nums[i]);
        }
        return true;
    }
};
        

    



