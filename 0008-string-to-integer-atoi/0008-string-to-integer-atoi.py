class Solution:
    def myAtoi(self, s: str) -> int:
        # Step 1: Ignore leading whitespace
        s = s.strip()

        # Step 2: Check for sign
        sign = 1
        if s and (s[0] == '-' or s[0] == '+'):
            if s[0] == '-':
                sign = -1
            s = s[1:]

        # Step 3: Read digits until non-digit character or end of string
        num = 0
        for char in s:
            if not char.isdigit():
                break
            num = num * 10 + int(char)

        # Step 4: Apply sign
        num *= sign

        # Step 5: Clamp the integer to the 32-bit signed integer range
        min_val = -2**31
        max_val = 2**31 - 1
        if num < min_val:
            return min_val
        elif num > max_val:
            return max_val
        else:
            return num
