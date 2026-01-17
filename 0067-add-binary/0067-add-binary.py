class Solution:
    def addBinary(self, a: str, b: str) -> str:
        x=int(a,2)
        y=int(b,2)
        c=x+y
        z=bin(c)[2:]
        return z