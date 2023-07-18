#include <bits/stdc++.h>
using namespace std;

void dfs(int s = 1, int p = -1){
    for(auto &i: adj[s])
        if(i != p)dis[i] = dis[s]+1, dfs(i,s);
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i <= n; ++i)adj[i].clear(), dis[i] = 0;
        for(int i = 1; i < n; ++i){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1, -1);
        vector<int> v;
        //starting from 2 since 1 cant be a leaf(given)
        for(int i = 2; i <= n; ++i)if(adj[i].size() == 1)v.push_back(dis[i]);
        sort(v.begin(), v.end());
        for(auto i: v)cout << i << ' ';
        cout << '\n';
    }
    return 0;
}