          /*
          ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
          उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
          */

#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

// Rec

// int f(int arr[],int ind,vector<int> &dp){
//      if(ind == 0)return arr[ind];
//      if(ind<0)return 0;

//      if(dp[ind]!=-1)return dp[ind];

//      int pick = arr[ind] + f(arr,ind-2,dp);
//      int notPick = f(arr,ind-1,dp);
 
//      return dp[ind] = max(pick,notPick);
//  }
// int FindMaxSum(int arr[], int n){
//      vector<int> dp(n+1,-1);
//      return f(arr,n-1,dp);
// }

int32_t main(){

#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
#endif        
     int n;
     cin>>n;
     int arr[n+1];
     for(int i=0;i<n;i++)cin>>arr[i];
     // cout<<FindMaxSum(arr,n);
     vector<int> dp(n+1,0);
     dp[0] = arr[0];
     for(int i=1;i<n;i++){
          int take = arr[i];
          if(i>1)take+=dp[i-2];
          dp[i] = max(take,dp[i-1]);
     }
     cout<<dp[n-1];
     return 0;
}