# It's much easier to impl string operations and HashTable in python.
# 76 ms (< 31.58%), 15.2 MB (< 17.87%)

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []
        dic = {3: "Fizz", 5: "Buzz"}
        for i in range(1, n + 1):
            tempstr = ""
            for j in dic.keys():
                if i % j == 0:
                    tempstr += dic[j]
            if tempstr == "":
                tempstr = str(i)
            answer.append(tempstr)
        return answer
