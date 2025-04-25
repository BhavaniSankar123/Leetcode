class Solution:
    def countInterestingSubarrays(self, nums: List[int], modulo: int, k: int) -> int:
        from collections import defaultdict

        count = 0
        prefix = 0
        freq = defaultdict(int)
        freq[0] = 1
        for num in nums:
            if num % modulo == 0:
                prefix += 1
            
            mod_val = prefix % modulo
            target = (mod_val - k) % modulo
            count += freq[target]
            freq[mod_val] += 1

        return count
