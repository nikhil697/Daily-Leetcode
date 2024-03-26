class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = list(set([x for x in nums if x > 0]))
        
        if not nums:
            return 1;
        nums.sort()
        for i in range(1, len(nums) + 1):
            if i != nums[i - 1]:
                return i
            
        return len(nums)+1