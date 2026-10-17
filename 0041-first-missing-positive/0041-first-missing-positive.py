class Solution(object):
    def firstMissingPositive(self, nums):
        nums.sort()
        ans=1
        for i in range(len(nums)):
            if nums[i]==ans:
                ans+=1
        return ans