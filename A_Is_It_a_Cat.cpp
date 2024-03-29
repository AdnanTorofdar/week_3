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
    int n;
    cin >> n;

    string s;
    cin >> s;
    string x = "";
    for (int i = 0; i < n; ++i)
    {
        s[i] = tolower(s[i]);
    }
    // cout<<s<<" ";
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != s[i + 1])
            x = x + s[i];
    }

    // cout<<x;
    if (x == "meow")
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
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