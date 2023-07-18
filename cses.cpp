#include<bits/stdc++.h>
using namespace std;

const int mxN=2e5+5;

vector<int> adj[mxN];

int cnt[mxN];

int dfs(int s=1,int p=-1){
	for(auto i:adj[s]){
		if(i==p)continue;
		cnt[s]+=dfs(i,s);
	}
	return 1+cnt[s];
}

// long long dfs(int s,int p,long long cnt){
// 	for(auto i:adj[s]){
// 		if(i==p)continue;
// 		cnt++;
// 		dfs(i,s,cnt);
// 	}
// 	return cnt;
// }

int main()
	{
		int n ;
		cin>>n;
		for(int i=0;i<n-1;++i){
			int x;
			cin >> x;
			adj[x].push_back(i+2);
		}
		dfs(1,-1);
		for(int i = 1;i <= n;++i){
			cout<<cnt[i]<<" ";
		}

		return 0;
	}