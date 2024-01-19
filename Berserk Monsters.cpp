#include <bits/stdc++.h>

using namespace std;

void solve() {
 
	 int n;
	 cin>>n;
	 int d[n];
	 int a[n];
	 int attack[n];
	 set<int>alive;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	alive.insert(i);
	 	attack[i]=0;
	 }
	 for(int i=0;i<n;i++)
	 	cin>>d[i];
	
	 set<int>dead;
	 for(int i=0;i<n;i++)
	 {
	 	if(i<n-1)
	 	{
	 		attack[i]+=a[i+1];
	 	}
	 	if(i>0)
	 	{
	 		attack[i]+=a[i-1];
	 	}
	 	if(attack[i]>d[i])
	 	{
	 		dead.insert(i);
	 	}
	 }
	 for(int i=0;i<n;i++)
	 {
	 	cout<<dead.size()<<" ";
	 	set<int>newdead;
	 	for(int el:dead)
	 	{
	 		alive.erase(el);
	 	}
	 	for(int el:dead)
	 	{
	 		auto it = alive.lower_bound(el);
	 		if(it!=alive.end())
	 		{
	 			attack[*it]=0;
	 			
	 			auto it2=it;
	 			it2++;
	 			
	 			if(it2!=alive.end())
	 			{
	 				
	 				attack[*it]+=a[*it2];
	 			}
	 			
	 			
	 			
				if(it!=alive.begin())
				{
					auto it2 = it;
					it2--;
					attack[*it]+=a[*it2];
				}
	 			if(attack[*it]>d[*it])
	 			{
	 				newdead.insert(*it);
	 			}
	 			
	 			
	 		}
	 		if(it!=alive.begin())
	 		{
	 			it--;
	 			
	 			attack[*it]=0;
	 			
	 			auto it2=it;
	 			it2++;
	 			
	 			if(it2!=alive.end())
	 			{
	 				
	 				attack[*it]+=a[*it2];
	 			}
	 			
	 			
	 			
				if(it!=alive.begin())
				{
					auto it2 = it;
					it2--;
					attack[*it]+=a[*it2];
				}
	 			if(attack[*it]>d[*it])
	 			{
	 				newdead.insert(*it);
	 			}
	 		}
	 	}
	 	dead.clear();
	 	swap(newdead,dead);
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
