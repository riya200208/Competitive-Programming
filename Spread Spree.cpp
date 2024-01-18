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
 
 int n,m;
 cin>>n>>m;
 int c = min(n,m);
 int r = max(n,m);
 int md = r/2;
 int moves = md;
 if(r%2>0)
 	md++;

 int st = max(1ll,c-moves);
 int end = min(c,1+moves);

 int sum = (dividing(mul(end,(end+1)),2)-dividing(mul(st,(st-1)),2)+mod)%mod;
 if(r%2 ==0)
 {
 	cout<<((mul(md,sum) + mul(md+1,sum))%mod)<<"\n";
 }
 else
 {
 	cout<<mul(md,sum)<<"\n";
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
