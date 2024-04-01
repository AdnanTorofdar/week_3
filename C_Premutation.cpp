//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> v1(n - 1);
        for (ll j = 0; j < n - 1; j++)
            cin >> v1[j];
        v.push_back(v1);
    }

    vector<pair<ll,ll>> val;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[v[i][0]]++;
        if (mp[v[i][0]] == 1)
            val.push_back({v[i][0], i});
    }

    ll indx;
    if (mp[val[0].first] > mp[val[1].first])
        cout << val[0].first, indx = val[1].second;
    else
        cout << val[1].first, indx = val[0].second;

    for (ll i = 0; i < n - 1; i++)
        cout << " " << v[indx][i];
    cout << nl;
}
int main()
{
    fast;
    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}