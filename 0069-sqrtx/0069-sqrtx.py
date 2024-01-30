class Solution:
    def mySqrt(self, x: int) -> int:
        #babylonian algorithm
        if x<2:
            return x
        y=x
        z=(y+(x/y))/2
        
        #0.00001 because precision upto 5 decimal points
        while abs(y-z)>=0.00001:
            y=z
            z=(y+(x/y))/2
        from math import floor
        return floor(z)
    #rounding the answer as questions asks us to round to nearest number