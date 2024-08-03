class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        arr.sort()
        target.sort()
        if(len(arr)==0):
            return True
        for i in range(len(arr)):
            if(arr[i]==target[i]):
                continue
            else:
                return False
        return True
        
        
        