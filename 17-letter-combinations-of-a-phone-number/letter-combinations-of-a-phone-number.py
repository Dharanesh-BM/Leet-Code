class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        
        if not digits:
            return []
        
        phone = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
        res = []
        
        def bk(cm,nd):
            if not nd:
                res.append(cm)
                return
            for letter in phone[nd[0]]:
                bk(cm+letter,nd[1:])
        bk("",digits)
        return res