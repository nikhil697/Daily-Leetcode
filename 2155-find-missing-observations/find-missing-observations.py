import random
from typing import List

class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        x = len(rolls)
        y = sum(rolls)
        z = (mean * (x + n)) - y
        if z < n or z > 6 * n:
            return []
        
        quotient, remainder = divmod(z, n)
        random_list = [quotient] * n
        for i in range(remainder):
            random_list[i] += 1
        
        return random_list