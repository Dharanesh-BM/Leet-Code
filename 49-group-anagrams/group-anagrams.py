class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        # defaultdict funciton creates a dictionary with value as a empty list
        result = defaultdict(list) 

        for i in strs:
            # sorted() funciton returns the list of charaters in the string
            # Using .join() to concatinate the characters 
            word = ''.join(sorted(i))
            result[word].append(i)
            
        # returing the list of values from the dictionary 
        return list(result.values())