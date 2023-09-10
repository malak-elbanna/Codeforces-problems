number, m = map(int, input().split())
s = list(map(int, input().split()))

mod = 1000000007

dp = [0] * (m+1)
dp[0] = 1

for i in range(1, m+1):
    if i in s:
        continue
    for j in range(1, i+1):
        dp[i] = (dp[i] + dp[i-j]) % mod

expected_seconds = sum(dp) % mod
print(expected_seconds)