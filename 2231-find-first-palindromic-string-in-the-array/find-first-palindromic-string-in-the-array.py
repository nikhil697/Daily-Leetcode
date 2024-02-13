class Solution(object):
    def firstPalindrome(self, words):
        x=""
        """
        :type words: List[str]
        :rtype: str
        """
        for i in words:
            cleaned=''.join((c.lower() for c in i if c.isalnum()))
            if(cleaned == cleaned[::-1]):
                return cleaned
        return x
             
                
        
        