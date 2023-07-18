#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int p = 0, ne = 0;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			if (k == -1)
				ne++;
			else
				p++;
		}
		if (p >= ne && ne % 2 == 0)
			cout << 0 << endl;
		else
		{
			int j = 0;
			while (p < ne)
			{
				j++;
				ne--;
				p++;
			}
			if (ne % 2 != 0 and ne != 0)
			{
				j++;
				ne--;
			}
			cout << j << endl;
		}
	}
	return 0;
}