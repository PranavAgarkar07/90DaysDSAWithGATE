class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = []
        
        for ch in s:
            if ch.isalnum():
                cleaned.append(ch.lower())

        n = len(cleaned)
        for i in range(n // 2):
            if cleaned[i] != cleaned[n - i - 1]:
                return False

        return True
