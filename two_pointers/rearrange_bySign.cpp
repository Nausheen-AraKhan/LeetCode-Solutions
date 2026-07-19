class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
               neg.push_back(nums[i]);
            else
               pos.push_back(nums[i]);
        }
        int x=0,y=0,z=0;
        while(z<nums.size())
        {
            ans[z]=pos[x];
            z++;
            x++;
            ans[z]=neg[y];
            z++;
            y++;
        }
        return ans;
    }
};
