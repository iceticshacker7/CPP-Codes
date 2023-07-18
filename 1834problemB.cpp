#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkSequence(const vector<int>& nums) {
    int maximum = *max_element(nums.begin(), nums.end());
    vector<int> freq(maximum + 1, 0);

    for (int num : nums) {
        freq[num]++;
    }

    for (int i = 1; i <= maximum; i++) {
        if (freq[i - 1] < freq[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int count, num;
        cin >> count;

        vector<int> numbers(count);
        for (int i = 0; i < count; i++) {
            cin >> num;
            numbers[i] = num;
        }

        bool isSequenceValid = checkSequence(numbers);

        if (isSequenceValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
