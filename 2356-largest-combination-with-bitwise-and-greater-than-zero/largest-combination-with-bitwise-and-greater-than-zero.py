class Solution:
    def largestCombination(self, candidates: List[int]) -> int:
        ans=0
        for i in range(0,32):
            cnt=0
            for j in range(0,len(candidates)):
                if(candidates[j]&(1<<i)):
                    cnt+=1
        
            ans=max(ans,cnt)
        return ans