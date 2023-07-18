#include <vector> 
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long> >v;
    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    long long a =v[0].first,b=v[0].second;
    long long ans = 1;
    long long mx=INT_MIN;
    for(long long i=1;i<n;i++){
        mx = max(ans,mx);
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].first<b){
            ans++;
            a=v[i].first;
            if(v[i].second>b)b=v[i].second;
        }
        else {
            a=v[i].first;
            b=v[i].second;
            ans=1;
        }
    }
    cout<<mx;
}