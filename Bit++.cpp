#include <bits/stdc++.h>
using namespace std;
int main() {
    std::string n;
    std::cin >> n;
    long long ans = 0;
    int i = 0;
    for (int j = n.length() - 1; j >= 0; --j) {
        int digit = n[j] - '0';
        int k = 0;
    	if(j==0 and digit==9) k=9;
    	else
         k = std::min(digit, 9 - digit);
        ans += k * static_cast<long long>(pow(10, i));
        ++i;
    }
    std::cout << ans << std::endl;
    return 0;
}
