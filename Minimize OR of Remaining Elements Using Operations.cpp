class Solution {
public:
    int minOrAfterOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=0;
        

        for(int i=29;i>=0;i--)
        {
                int targ = ans|((1ll<<i)-1);
                int ops=0;
                int cur = (1ll<<30)-1;
                int group=0;
                for(int el:nums)
                {
                    cur = cur&el;
                    group++;
                    if((cur|targ) == targ)
                    {
                        cur = (1ll<<30) -1;
                        ops+=group-1;
                        group=0;
                    }
                    


                }
                ops+=group;
                if(ops>k)
                {
                    ans = ans|(1ll<<i);
                }
        }
        return ans;
    }
};
