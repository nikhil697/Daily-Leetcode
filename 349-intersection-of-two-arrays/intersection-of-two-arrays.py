class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        s1=set(nums1)
        s2=set(nums2)
        common=s1.intersection(s2)
        return common
        