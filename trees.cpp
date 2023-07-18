#include<bits/stdc++.h>
using namespace std;

const int mxN=2e5+5;

int cnt[mxN];

int dfs(int s=1,int p=-1){
	for(auto i:adj[s]){
		if(i==p)continue;
		cnt[s]+=dfs(i,s);
	}
	return 1+cnt[s];
}

void bfs(int s){
	queue<pair<int,int>> q;
	q.push({s,-1});
	while(!q.empty()){
		int s = q.front().first;
		int p = q.front().second;

	}
}

vector<int> adj[200010];
int dis[200010];

vector<int> adj[200005];
int main()
	{
		int n ;
		cin>>n;
		for(int i=0;i<n-1;++i){
			int x,y;
			cin >> x >>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i = 1;i <= n;++i){
			cout<<i<<"-> ";
			for(auto j:adj[i]){
				cout<<j<<' ';
			}
			cout<< '\n';
		}

		return 0;
	}