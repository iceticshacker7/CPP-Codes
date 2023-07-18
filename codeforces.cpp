#include<bits/stdc++.h>
using namespace std;
int main(){
	int mi ,mj ,k=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int x;
			cin>>x;
		   if(x==1){
				mi=i;
				mj=j;
				break;
			}
		}
	}
	mi++;
	mj++;
	k=abs(mi-3)+abs(mj-3);
	cout<<k;
	return 0;
}