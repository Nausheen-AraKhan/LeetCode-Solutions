class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> result;
        int rem;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> sub;
            while(nums[i]!=0)
            {
               
                rem=nums[i]%10;
                sub.push_back(rem);
                nums[i]/=10;
            }
                reverse(sub.begin(),sub.end());
            
            result.insert(result.end(),sub.begin(),sub.end());
        }
        return result;
    }
};
