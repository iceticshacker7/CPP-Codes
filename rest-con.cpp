#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long> >v;
    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,0});
    }
    sort(v.begin(),v.end());
    long long ans = 0;
    long long mx=0;
    for(auto i:v){
        if(i.second==0)--ans;
        else ++ans;
        mx = max(ans,mx);
    }
    cout<<mx;
    return 0;
}