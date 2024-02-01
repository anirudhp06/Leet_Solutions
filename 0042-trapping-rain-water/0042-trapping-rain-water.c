int trap(int* height, int heightSize) {
    int left=0,right=heightSize-1;
    int maxSum=0,maxLeft=0,maxRight=0; 
    
    // We will have 1 total Sum(MaxSum)
    /* maxLeft will have sum from left side
    maxRight will have sum from Right side
    */
    while(left<=right)//loop from left side of array to right side
    {
        if(height[left]<=height[right])// left end < extreme right end
        {
            if(height[left]>=maxLeft)
                maxLeft=height[left];// initialize maxLeft sum var to height[left]
            else
                maxSum+=maxLeft-height[left];
            left++;
        }
        else
        {
            if(height[right]>=maxRight)
                maxRight=height[right];
            else
                maxSum+=maxRight-height[right];
            right--;
        }
    }
    return maxSum;
}