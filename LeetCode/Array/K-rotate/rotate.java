// Rotate Array

// Q) Given an array, rotate the array to the right by k steps, where k is non-negative.
  
class Solution {
    public void rotate(int[] nums, int k) {
        		if (k==0) return;
        if (nums == null || nums.length == 0) return;
        
        int count = 0;
        for (int i=0; i<nums.length && count < nums.length; i++) {
        	
        	int curr = i;
        	int new_i = (curr + k) % nums.length;
        	
        	int temp = nums[curr];
        	int next;
        	
        	while (new_i != i) {
        		next = nums[new_i];
        		nums[new_i] = temp;
        		curr = new_i;
        		
        		new_i = (curr + k) % nums.length;
        		temp = next;
        		count ++;
        	}
        	nums[new_i] = temp;
        	count ++;
        }
	}
}   
