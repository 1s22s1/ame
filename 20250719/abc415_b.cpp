#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string S;
    cin >> S;

    ll count = 0;
    rep(i, S.size())
    {
        if (S.at(i) == '#')
        {
            if (count % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << ',' << i + 1 << endl;
            }

            count++;
        }
    }

    return 0;
}
