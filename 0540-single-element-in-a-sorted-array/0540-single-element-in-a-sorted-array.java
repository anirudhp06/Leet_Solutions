class Solution {
    public int singleNonDuplicate(int[] nums) {
        /*int num = 0;
        if(nums.length==1)return nums[0];
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                i++;
            } else {
                num = nums[i];
            }
        }
        return num; This approach didn't cover last 5 test cases(it passed till 10 test case)'*/
        int left = 0, right = nums.length-1;
        while(left < right){
            int mid = (left + right)/2;
            if( (mid % 2 == 0 && nums[mid] == nums[mid +1]) || (mid %2 == 1 && nums[mid] == nums[mid - 1]) )
                left = mid + 1;
            else
                right = mid;
        }
        return nums[left];
    }   
}