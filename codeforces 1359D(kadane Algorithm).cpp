#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i =0 ; i < n ; i++) cin >> a[i];
    long long ans =0 ;
    for(int mx = 0 ; mx <= 30 ; mx++)
    {
        long long cur = 0;
        long long best = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int val = (a[i] > mx ? -inf : a[i]);
            cur += val;
            best = min(best,cur);
            ans = max(ans,(cur - best) - mx);
        }
    }
    cout << ans << endl;

    return 0;
}
