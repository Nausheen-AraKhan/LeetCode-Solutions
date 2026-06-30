class Solution(object):
    def countOdds(self, low, high):
        if(high%2==0 and low%2==0):
           ans=(high-low)/2
        else:
           ans=(high-low)/2 +1
        return ans


        
