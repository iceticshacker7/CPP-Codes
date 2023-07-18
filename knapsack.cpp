#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> arr(k);
        for (int i = 0; i < k; i++) {
            arr[i] = 1LL << i;
        }

        
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        dp[0][0] = 1;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                dp[i][j] = dp[i - 1][j];
                if (j > 0)
                    dp[i][j] += dp[i - 1][j - 1];
            }
        }

        int permutations = dp[n][k];
        cout << permutations << endl;
    }
    return 0;
}