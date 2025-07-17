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
    ll K;

    cin >> S >> K;

    ll div = 0;
    ll i = 0;
    while (i < S.size())
    {
        ll j = i;
        while (j < S.size() && S.at(i) == S.at(j))
        {
            j++;
        }

        div += (j - i) / 2;
        j = i;
    }

    if (S.front() == S.back())
    {
    }
    else
    {
        cout << div * K << endl;
    }

    return 0;
}
