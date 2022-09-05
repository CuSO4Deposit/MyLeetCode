# Using list in python as hashmap will be simple
# 146 ms(< 14.38%), 14.5 MB(< 5.25%)

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        hashmap = []
        for i in magazine:
            hashmap.append(i)
        for i in ransomNote:
            try:
                hashmap.remove(i)
            except ValueError:
                return False
        return True
