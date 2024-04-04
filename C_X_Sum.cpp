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
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int max_sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int current_sum = 0;
            current_sum += matrix[i][j];
            int row_up = i - 1, col_left = j - 1;
            while (row_up >= 0 && col_left >= 0)
            {
                current_sum += matrix[row_up][col_left];
                row_up--;
                col_left--;
            }
            row_up = i - 1;
            int col_right = j + 1;
            while (row_up >= 0 && col_right < cols)
            {
                current_sum += matrix[row_up][col_right];
                row_up--;
                col_right++;
            }
            int row_down = i + 1;
            col_left = j - 1;
            while (row_down < rows && col_left >= 0)
            {
                current_sum += matrix[row_down][col_left];
                row_down++;
                col_left--;
            }
            row_down = i + 1;
            col_right = j + 1;
            while (row_down < rows && col_right < cols)
            {
                current_sum += matrix[row_down][col_right];
                row_down++;
                col_right++;
            }
            max_sum = max(max_sum, current_sum);
        }
    }
    cout << max_sum << endl;
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