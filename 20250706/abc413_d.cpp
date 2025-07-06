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

bool solve()
{
    ll N;
    cin >> N;

    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end(), [](ll a, ll b)
         { return abs(a) < abs(b); });

    rep(i, N - 2)
    {
        if (A.at(i + 1) * A.at(i + 1) != A.at(i) * A.at(i + 2))
        {
            return false;
        }
    }

    if (abs(A.at(0)) == abs(A.back()))
    {
        ll positive_count = 0, negative_count = 0;

        rep(i, N)
        {
            if (A.at(i) > 0)
            {
                positive_count++;
            }
            else
            {
                negative_count++;
            }
        }

        if (abs(positive_count - negative_count) == 1)
        {
            return true;
        }
    }

    return true;
}

int main()
{
    init();

    ll T;
    cin >> T;

    rep(i, T)
    {
        if (solve())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
