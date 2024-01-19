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
 
	 int x;
	 cin>>x;
	 x--;
	 int curr=0;
	 int sum = 1;
	 vector<int>ans;
	 while(x >=sum)
	 {
	 	x-=sum;
	 	sum*=2ll;
	 	ans.push_back(curr);
	 	curr++;
	 }
	 
	 while(x!=0)
	 {
	 	if(x>=1ll<<curr)
	 	{
	 		ans.push_back(curr);
	 		x-=(1ll<<curr);
	 	}
	 	curr--;
	 	
	 	
	 }
	 cout<<ans.size()<<"\n";
	 for(int el:ans)
	 {
	 	cout<<el<<" ";
	 }
	 cout<<"\n";
	 
	
	
	 
}

int32_t main() {
    int t = 1;

    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
