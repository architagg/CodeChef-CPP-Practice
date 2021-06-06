#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    ll n, k;
    ll x, y;
    while (t--)
    {
        cin >> n >> k;
        vector<pair<ll, ll>> c;
        while (n--)
        {
            cin >> x >> y;
            c.push_back(make_pair((x * x + y * y), x + y));
        }
        sort(c.begin(), c.end());
        ll sum = 0;
        ll i = 0;
        while (i < k)
        {
            sum += c[i].second;
            i += 1;
        }
        cout << sum << endl;
    }

    return 0;
}
