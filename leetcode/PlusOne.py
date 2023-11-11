// https://leetcode.com/problems/plus-one/
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = ""
        for digit in digits:
            num +=str(digit)
        num = int(num)
        num +=1
        numarr = [int(x) for x in str(num)]
        return numarr
        
