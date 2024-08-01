class Solution:
    def countSeniors(self, details: List[str]) -> int:
        count=0;
        for s in details:
            x=s[11:13]
            if(int(x)>60):
                count=count+1
        return count