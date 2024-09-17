class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1 = s1.split() + s2.split()
        freq=Counter(l1)
        return [x for x in l1 if freq[x] == 1]