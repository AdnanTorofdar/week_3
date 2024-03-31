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
    vector<ll> a, b, c;
    //--------------------------input
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        c.push_back(x);
    }
    //-------------------------output
    // for (ll c : a)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    // for (ll c : b)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    // for (ll c : c)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    //----------------------------pair
    vector<pair<ll, ll>> w;
    vector<pair<ll, ll>> s;
    vector<pair<ll, ll>> z;
    //-------------------------pair input
    for (ll i = 0; i < n; i++)
    {
        w.push_back(make_pair(a[i], i));
    }
    for (ll i = 0; i < n; i++)
    {
        s.push_back(make_pair(b[i], i));
    }
    for (ll i = 0; i < n; i++)
    {
        z.push_back(make_pair(c[i], i));
    }
    //----------------------output pair
    
    sort(w.rbegin(),w.rend());
    sort(s.rbegin(),s.rend());
    sort(z.rbegin(),z.rend());
    // for (auto p : z)
    // {
    //     cout << p.first << " " << p.second<<endl;
    // }
    // cout<<endl;
    ll ans=0;
    for(ll i=0;i<3;i++)
    {
        ll sum=w[i].first;
        for(ll j=0;j<3;j++)
        {
            if(s[j].second!=w[i].second)
            {
                sum+=s[j].first;
                for(ll k=0;k<3;k++)
                {
                    if(z[k].second!=w[i].second && z[k].second!=s[j].second)
                    {
                        sum+=z[k].first;
                        ans=max(ans,sum);
                        sum-=z[k].first;
                    }
                }
                sum-=s[j].first;
            }
        }
    }
    cout<<ans<<endl;
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