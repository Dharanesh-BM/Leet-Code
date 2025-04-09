class Solution:
    def minInsertions(self, s: str) -> int:
        string_length = len(s)
        rs = s[::-1]

        n,m = len(s),len(rs)
        dp = [[0]*(n+1) for _ in range(m+1)]

        for i in range(1,m+1):
            for j in range(1,n+1):
                if s[j-1] == rs[i-1]:
                    dp[i][j] = dp[i-1][j-1]+1
                else:
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1])
        
        return string_length-dp[n][m]