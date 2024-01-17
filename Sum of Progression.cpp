#include <bits/stdc++.h>


using namespace std;

long long pref[320][100322];
long long prefsum[320][100322];

void solve() {
 

	int n,q;
	cin>>n>>q;
	long long a[n];
	
	long long sq=1;
	while(sq*sq<n)
	{
		sq++;
	}
	
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= sq; i++) {
        for (int j = 0; j <= i; j++) {
            pref[i][j] = 0ll;
            prefsum[i][j] = 0ll;
        }
        for (int j = 0; j < n; j++) {
            prefsum[i][j + i ] = prefsum[i][j] + a[j] * (j / i + 1);
            pref[i][j + i ] = pref[i][j] + a[j];
           
        }
      
        
    }
	long long ans=0;
	for(int i=0;i<q;i++)
	{
		int s,d;
		long long k;
		cin>>s>>d>>k;
		s--;
		ans=0;
		if(d>sq)
		{
			
			for(int j=s;j<=s+d*1ll*(k-1);j+=d)
			{
				ans+=a[j]*((j-s)/d + 1);
			}
			cout<<ans<<" ";
			continue;
		}
		int last = s + d *1ll* (k-1);
        
	    cout<<( prefsum[d][last + d] - prefsum[d][s] -
	                (pref[d][last + d] - pref[d][s]) * (s / d))<<" ";
    
		
		
		
		
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
