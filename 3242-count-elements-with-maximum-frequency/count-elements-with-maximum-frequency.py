class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        frequencies={}
        for num in nums:
            if num in frequencies:
                frequencies[num]+=1
            else:
                frequencies[num]=1
                
        max_freq=0
        for frequency in frequencies.values():
            max_freq=max(max_freq,frequency)
            
        freq_of_max_freq=0
        for frequency in frequencies.values():
            if frequency==max_freq:
                freq_of_max_freq+=1
        return freq_of_max_freq*max_freq
                    
        