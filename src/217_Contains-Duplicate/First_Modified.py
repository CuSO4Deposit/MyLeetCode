# My First Solution
# Hash table in python is simple!
# **TLE**, O(n^2)

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        HashTable = []
        for i in nums:
            if i in HashTable:
                return True
            HashTable.append(i)
        return False

