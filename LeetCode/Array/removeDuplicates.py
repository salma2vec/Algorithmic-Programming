# Remove Duplicates from Sorted Array

# Q) Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
# The relative order of the elements should be kept the same.

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count = 0
        
        for i in range(len(nums)):
            
            if len(nums) < 2:
                return len(nums)
        else:
            j = 0
            i = 1
            while i < len(nums):
                if nums[j] == nums[i]:
                    i += 1
                else:
                    j += 1
                    nums[j] = nums[i]
                    i += 1
            return j+1
            nums[count] = nums[i]
            count += 1
        return count
