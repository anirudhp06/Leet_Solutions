int maxArea(int* height, int heightSize)
{
    int left=0,right=heightSize-1,total_area=0;
    
    while(left<right)
    {
        int h,width=right-left,area;
        
        if(height[left]<height[right])
            h=height[left];
        else
            h=height[right];
        
        area=h*width;
        
        if(area>total_area)
            total_area=area;
        
        if(height[left]<height[right])
            left++;
        else
            right--;
    }
    return total_area;
}