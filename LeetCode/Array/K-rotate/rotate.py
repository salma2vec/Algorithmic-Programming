class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # using Splicing 
        k %= len(nums)
        nums[k:], nums[:k] = nums[:-k], nums[-k:]
