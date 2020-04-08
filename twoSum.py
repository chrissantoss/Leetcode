class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        
        numMap = {}
        for ind, item in enumerate(nums):
            complement = target - item
            if complement in numMap:
                return [numMap[complement], ind] #complement found! return the indices 
            else: 
                numMap[item] = ind #put value with its index in the map 
        
        
