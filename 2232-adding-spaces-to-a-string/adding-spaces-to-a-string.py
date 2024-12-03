class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        L=[]
        for i in s:
            L.append(i)
        for j in spaces:
            L[j]=" "+L[j]
        s=""
        for i in L:
            s=s+i
        return s
        