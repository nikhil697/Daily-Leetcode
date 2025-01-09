class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        x=len(pref)
        count=0
        for i in words:
            if(i[0:x]==pref):
                count+=1
        return count