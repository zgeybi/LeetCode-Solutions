class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        dics = defaultdict(int)
        for i in s:
            dics[i] += 1
        for i in t:
            if i not in dics:
                return False
            else:
                if dics[i] - 1 == 0:
                    del dics[i]
                    continue
                dics[i] -= 1
                
        return True
