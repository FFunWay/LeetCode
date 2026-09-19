class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
            
        count = {}
        for char in s:
            if char not in count:
                count[char] = 1
            else:
                count[char] += 1 

        for char in t:
            if char not in count:
                return False
            elif char in count:
                count[char] -= 1

            

        for char in count:
            if count[char] != 0:
                return False

            if count[char] == 0:
                return True