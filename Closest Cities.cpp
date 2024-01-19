#include <bits/stdc++.h>

#define  int long long int
using namespace std;
int mod = 998244353;
int mul(int x,int y){
    	return ((x%mod)*(y%mod))%mod;
   }
   int powers(int x,int p){
    x=x%mod;
    if(p==0) return 1;
    if(p==1) return x%mod;
    int z=powers(x,p/2);
    if(p%2>0) return mul(x,mul(z,z));
    return mul(z,z);
   }
 	int dividing(int x,int y){
    return mul(x,powers(y,mod-2));
	}
void solve() {
 
	 int n;
	 cin>>n;
	 int a[n];
	  int sm[n];
	 int pch[n];
	 int ngh[n];
	 
	 for(int i=0;i<n;i++){
	 	cin>>a[i];
	 	
	 	sm[i]=0;
	 	pch[i]=0;
	}
	ngh[n-1]=-1;
	ngh[0]=1;
	for(int i=1;i<n-1;i++)
	{
		int d1 = abs(a[i]-a[i-1]);
		int d2 = abs(a[i]-a[i+1]);
		if(d1==d2)
		{
			ngh[i]=0;
		}
		else if(d1<d2)
		{
			ngh[i]=-1;
		}
		else
			ngh[i]=1;
	}
	
	for(int i=n-2;i>=0;i--)
	{
		if(ngh[i+1]!=1)
	 	{
	 		pch[i]++;
	 	}
	 	else
			pch[i]=a[i+1]-a[i];
		pch[i]+=pch[i+1];
		
	}
	for(int i=1;i<n;i++)
	{ 
	 	if(ngh[i-1]!=-1)
	 	{
	 		sm[i]++;
	 	}
	 	else
			sm[i]=a[i]-a[i-1];
		sm[i]+=sm[i-1];
	}
	// for(int i=0;i<n;i++)
		// cout<<pch[i]<<" ";
	// cout<<"\n";
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		if(y>x)
		{
			cout<<sm[y]-sm[x]<<"\n";
		}
		else
		{
			cout<<pch[y]-pch[x]<<"\n";
		
		}
		
	}
	
	
	
	 
}

int32_t main() {
    int t = 1;

    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
