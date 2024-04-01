class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        r=s.rstrip()
        r=r.split(" ")
        x=len(r[-1])
        return x
