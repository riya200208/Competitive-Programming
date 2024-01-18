#include <bits/stdc++.h>

#define  int long long int
using namespace std;

void solve() {
 
 int a,b;
 cin>>a>>b;
 int d = abs(a-b);
 if(d==0)
 {
 	cout<<"0\n";
 	return;
 }
 
 int i=1,j=1e5;
 int sum=0,cnt=0;
 while(i<=j)
 {
 	int mid = i+(j-i)/2;
 	int temp = mid*(mid+1ll)/2ll;
 	if(temp>=d)
 	{
 		cnt = mid;
 		sum = temp;
 		j = mid-1;
 	}
 	else
 		i=mid+1;
 }
 if(d%2 >0)
 {
 	if(sum%2 >0)
 	{
 		cout<<cnt<<"\n";
 	}
 	else
 	{
 		cnt++;
 		int ag = (cnt+1)*(cnt)/2;
 		if(ag%2 ==0)
 			cnt++;
 		cout<<cnt<<"\n";
 		
 	}
 }
 else
 {
 	if(sum%2 ==0)
 	{
 		cout<<cnt<<"\n";
 	}
 	else
 	{
 		cnt++;
 		int ag = (cnt+1)*(cnt)/2;
 		if(ag%2 >0)
 			cnt++;
 		cout<<cnt<<"\n";
 		
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
