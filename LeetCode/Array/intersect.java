// Intersection of Two Arrays II

// Q) Given two integer arrays nums1 and nums2, return an array of their intersection. 
// Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) 
    {
       if (nums1.length == 0 || nums2.length == 0) 
       {
          return new int[] {};
       }
       Arrays.sort(nums1);
       Arrays.sort(nums2);
       
       int i=0;
       int j=0;
  
       List<Integer> res = new ArrayList<Integer>();
       while (i<nums1.length && j<nums2.length) {
           if (nums1[i] == nums2[j]) 
           {
               res.add(nums1[i]);
               i++;
               j++;
           }
           else if (nums1[i] < nums2[j]) 
           {
             i++;
           }
           else {
              j++;
           }
      }
      int temp;
      temp = res.size();
      int[] r = new int[temp];
      for (i=0; i<temp;i++)
      {
          r[i] = res.get(i);
      }
   
      return r;
   }
}
