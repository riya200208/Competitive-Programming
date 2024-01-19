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
	vector<int>a(n);
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{	cin>>a[i];
		mp[a[i]]++;
	}


	int ans=0;
	int ch=0;
	for(auto it:mp)
	{
		int f = it.second;

		if(f>1)
		{
			
			ans+=((f*(f-1))/2 )*1ll*max(0ll,ch);
			if(f>2)
				ans+=(f*1ll*(f-1)*1ll*(f-2)*1ll)/6ll;
			
		}
	
		ch+=f;
		
		
	}
	cout<<ans<<"\n";
	
}

int32_t main() {
    int t = 1;

    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
