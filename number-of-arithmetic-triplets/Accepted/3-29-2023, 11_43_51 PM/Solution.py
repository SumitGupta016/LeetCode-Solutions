// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count=0
        for i in range(len(nums)):
            for j in range(len(nums)):
                for k in range(len(nums)):
                    if i<j and j<k and nums[j]-nums[i]==diff and nums[k]-nums[j]==diff:
                        count+=1
        return count