#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	vector<int> dp(n+1);
	for(auto &x:v)cin>>x;
	for(int i=1;i<n;i++){
		int minSteps = INT_MAX;
		for(int j=1;j <= k;j++){
			if(i-j>=0){
				int jump = dp[i-j] + abs(v[i]-v[i-j]);
				minSteps = min(minSteps,jump);
			}
			dp[i] = minSteps;
		}
	}
	cout<<dp[n-1];

	return 0; 
}