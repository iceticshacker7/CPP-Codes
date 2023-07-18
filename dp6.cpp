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

int rec(vector<vector<int>>& points,int last,int day,vector<vector<int>> &dp){
	if(dp[day][last]!=-1)return dp[day][last];
	if(day==0){
		int mx=-1;
		for(int i=0;i<3;i++)if(i!=last)mx = max(points[0][i],mx);
		return dp[day][last] = mx;
	}
	if(day<0)return 0;
	int maxi = 0;
	for(int i=0;i<3;i++){
		if(i!=last){
			int activity = points[day][i] + rec(points,i,day-1,dp);
			maxi = max(activity,maxi);
		}
	}

	return dp[day][last] = maxi;
}

int maximumPoints(vector<vector<int>>& points, int n) {
    vector<vector<int>> dp(n+1,vector<int> (4,-1));
    return rec(points,3,n-1,dp);
}

int ninjaTraining(int n, vector < vector < int > > & points) {

	  vector < vector < int > > dp(n, vector < int > (4, 0));

	  dp[0][0] = max(points[0][1], points[0][2]);
	  dp[0][1] = max(points[0][0], points[0][2]);
	  dp[0][2] = max(points[0][0], points[0][1]);
	  dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

	  for (int day = 1; day < n; day++) {
	    for (int last = 0; last < 4; last++) {
	      dp[day][last] = 0;
	      for (int task = 0; task <= 2; task++) {
	        if (task != last) {
	          int activity = points[day][task] + dp[day - 1][task];
	          dp[day][last] = max(dp[day][last], activity);
	        }
	      }
	    }

	  }

	  return dp[n - 1][3];
}

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector < vector < int > > points = {{10,40,70},
                                      {20,50,80},
                                      {30,60,90}};

	  int n = points.size();
	  cout << maximumPoints(points,n);
	  cout<<'\n';
	  cout<<ninjaTraining(n,points);
	return 0;
}