class Solution {
  int searchInsert(List<int> nums, int target) {
      int low = 0;
      int high = nums.length-1;
      int mid = 0;

      if(nums[high] < target) return high+1;

      while(low <= high) {
          mid = low + ((high-low)/2).toInt();

          if(nums[mid]==target) {
              return mid;
          }  

          if(nums[mid] > target) {
            high = mid-1;
          }else {
            low = mid+1;
          }
      }
      
      return low;
  }
}
