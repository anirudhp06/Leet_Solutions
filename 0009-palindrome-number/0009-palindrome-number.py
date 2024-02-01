class Solution:
    def isPalindrome(self, x: int) -> bool:
        x=str(x)
        n=len(x)
        i=0
        j=n-1
        
        while i<=j:
            if x[i]==x[j]:
                i+=1
                j-=1
            else:
                return False
        return True