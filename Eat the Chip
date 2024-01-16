#include <bits/stdc++.h>

#define  int long long int

using namespace std;


int mul(int x,int y,int mod){
    return ((x%mod)*(y%mod))%mod;
   }
   int powers(int x,int p,int mod){
    x=x%mod;
    if(p==0) return 1;
    if(p==1) return x%mod;
    int z=powers(x,p/2,mod);
    if(p%2>0) return mul(x,mul(z,z,mod),mod);
    return mul(z,z,mod);
   }
void solve() {
 
	int h,w,x1,x2,y1,y2;
	cin>>h>>w>>x1>>y1>>x2>>y2;
	int row = x2-x1;
	int col = abs(y1-y2);
	if(row<=0)
	{
		cout<<"Draw\n";
		return;
	}
	bool a=false,b=false;
	int stp = row/2;
	if(row%2>0)
	{
		//alice
		if(min(y2+stp,w)<=min(w,y1+stp+1) && max(1ll,y2-stp)>=max(1ll,y1-stp-1))
	
		{
			cout<<"Alice\n";
			return;
		}
		
	}
	else
	{
		if(min(y2+stp,w)>=min(w,y1+stp) && max(1ll,y2-stp)<=max(1ll,y1-stp))
	
		{
			cout<<"Bob\n";
			return;
		}
	}
	cout<<"Draw\n";
	
}

int32_t main() {
    int t = 1;

    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
