class Solution {
    public int reverse(int num) {
        if (num >= -9 && num <= 9)
            return num;

        int unSignedNum = Math.abs(num);
        int signOfNum = num / unSignedNum;
        long rev = 0;

        while (unSignedNum > 0) {
            rev = rev * 10 + unSignedNum % 10;
            unSignedNum /= 10;
        }
        if (rev > Integer.MAX_VALUE)
            return 0;
        else
            return (int) (rev * signOfNum);
    }
}