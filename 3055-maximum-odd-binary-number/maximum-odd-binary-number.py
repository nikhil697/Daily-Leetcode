class Solution(object):
    def maximumOddBinaryNumber(self, s):
        """
        :type s: str
        :rtype: str
        """
        count1=s.count('1')
        count0=s.count('0')
        
        s='1'*(count1-1)+'0'*count0+'1'
        return s
        
        
            
        