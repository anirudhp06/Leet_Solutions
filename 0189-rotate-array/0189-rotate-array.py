class Solution:
    def rotate(self, n: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k=k%len(n)
        if k>0:
            n.reverse()
            n[:k]=n[:k][::-1]
            n[k:]=n[k:][::-1]
        