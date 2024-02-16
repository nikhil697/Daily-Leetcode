class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        freq_counter = Counter(arr)
        sorted_integers = sorted(freq_counter.items(), key=lambda x: x[1])

        for i in range(min(k, len(sorted_integers))):
            num, freq = sorted_integers[i]
            if freq <= k:
                k -= freq
                del freq_counter[num]
            else:
                freq_counter[num] -= k
                k = 0
        result = len(freq_counter.keys())
        return result
        