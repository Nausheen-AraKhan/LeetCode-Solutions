class Solution(object):
    def findDisappearedNumbers(self, nums):
        nums.sort()
        s=set(nums)
        ans=[]
        for i in range(1,len(nums)+1):
            if i not in s:
                ans.append(i)
        return ans
