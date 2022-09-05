# Use dict as hash table
# 865 ms(< 18.04%), 26 MB(< 68.9%)

class Solution:
    def Hash(num: int) -> int:
        return num % 1000

    def containsDuplicate(self, nums: List[int]) -> bool:
        hashtable = {}
        for i in nums:
            if Solution.Hash(i) not in hashtable:
                hashtable[Solution.Hash(i)] = [i]
            else:
                if i in hashtable[Solution.Hash(i)]:
                    return True
                hashtable[Solution.Hash(i)].append(i)
        return False
