#include<bits/stdc++.h>
using namespace std;

int main() {
    int t2;
    cin >> t2;

    while (t2 > 0) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> li;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int tem;
            cin >> tem;
            if (tem <= q) {
                count++;
                if (i == n - 1)
                    li.push_back(count);
            } else {
                li.push_back(count);
                count = 0;
            }
        }

        long long ans = 0;

        for (int i = 0; i < li.size(); i++) {
            int cons = li[i];

            for (int j = 1; j <= cons; j++) {
                int plus = j + k - 1;
                if (plus <= cons) {
                    long long ways = cons - plus + 1;
                    ans += ways;
                }
            }
        }

        cout << ans << endl;
        t2--;
    }

    return 0;
}