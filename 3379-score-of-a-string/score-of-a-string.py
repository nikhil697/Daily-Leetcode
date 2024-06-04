class Solution:
    def scoreOfString(self, s: str) -> int:
        L=[]
        for i in s:
            L.append(ord(i))
        
        out=[]
        for i in range (len(L)-1):
            out.append(abs(L[i]-L[i+1]))
                
        sum1=0       
        for i in range (len(out)):
            sum1=sum1+out[i]
        return sum1;
        