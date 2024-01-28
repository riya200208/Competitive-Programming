class Solution {
public:
 
    int maximumLength(vector<int>& nums) {
        
        map<long long int,int>mp;
        for(int el:nums)
        {
            mp[1ll*el]++;
        }
        int ans = 0;
        if(mp.find(1ll)!=mp.end())
        {
            if(mp[1ll]%2 >0)
                ans = mp[1ll];
            else
                ans = mp[1ll]-1;
        }
        for(auto it:mp)
        {
            
            long long int el = it.first;
            if(el ==1ll)
                continue;
            long long mul = el;
            int curr=0;
            for(int j=1;j<=30 && ((mul)<= 1e9 && mul>0);j++)
            {
                if(mp.find(mul) == mp.end())
                {
                    ans = max(ans,curr-1);
                    break;
                }
                else if(mp[mul]==1)
                {
                    ans = max(ans,curr+1);
                    break;
                }
                else
                    curr+=2;
                
                mul = mul*mul;
            }
          //  cout<<curr<<" "<<el<<"\n";
            ans = max(ans,curr-1);
        }
        return ans;
    }
};
