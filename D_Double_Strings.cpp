//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                    \
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
  vector<string> v(n);
  map<string, bool> m;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    m[v[i]] = true;
  }
  for (int i = 0; i < n; i++)
  {
    bool flag = false;
    for (int j = 0; j < v[i].size(); j++)
    {
      string s1 = v[i].substr(0, j);
      string s2 = v[i].substr(j, v[i].size() - 1);
      if (m[s1] && m[s2])
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "1";
    else
      cout << "0";
  }
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