#include<bits/stdc++.h>
using namespace std;
const int m = 1000000007;
int main()
{
    string s;
    cin >> s;
    for(char x : s)
    {
        if(x == 'w' || x == 'm')
        {
            cout << 0 << endl;
            return 0;
        }
    }
    int n = s.size();
    vector <int> dp(n+1);

    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        dp[i] = dp[i-1];
        if(s[i-1] == s[i-2] and (s[i-1] == 'u' || s[i-1] == 'n'))
            dp[i] = (dp[i-1]+dp[i-2])%m;
    }
    cout << dp[n] << endl;

    return 0;
}

