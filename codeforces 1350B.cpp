#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n+2];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        vector <int> dp(n+1,1);
        int ans =  1;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = i + i ; j <= n ; j += i)
            {
                if(a[j] > a[i])
                {
                    dp[j] = max(dp[j],dp[i]+1);
                    ans = max(ans,dp[j]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
