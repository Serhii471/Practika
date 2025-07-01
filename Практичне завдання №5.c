#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mod = 12345;
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
    }
    printf("%d\n", dp[n]);
}
