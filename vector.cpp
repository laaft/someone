#include <bits/stdc++.h>

using namespace std;
#define ghdjdjdjdjd 14362
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        reverse(a.begin(), a.end());
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}
