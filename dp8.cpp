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

int countWays2(vector<int> matrix,int m, int n){
    vector<int> prev(n,0);
    for(int i=0; i<m; i++){
        vector<int> temp(n,0);
        for(int j=0; j<n; j++){
            if(i==0 && j==0){
                temp[j]=1;
                continue;
            }
            if(matrix[i][j]==0){
            	temp[j]=0;
            	continue;
            }
            int up=0;
            int left =0;
            
            if(i>0)
                up = prev[j];
            if(j>0)
                left = temp[j-1];
                
            temp[j] = up + left;
        }
        prev = temp;
    }
    
    return prev[n-1];
    
}

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	return 0;
}