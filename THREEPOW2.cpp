#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int one = 0, count = 0,sum = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s == "10"||s == "1" )
    {
        cout<< "NO\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        if (count <= 3)
        {
            cout<< "YES\n";
        }
        else
        {
            cout<< "NO\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      solve();
    }

    return 0;
}

