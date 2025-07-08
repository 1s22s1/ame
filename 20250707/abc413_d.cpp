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

    if (count(A.begin(), A.end(), A.at(0)) == N)
    {
        return true;
    }

    bool ok;
    if (count(A.begin(), A.end(), abs(A.at(0))) == N)
    {
        ll positive = 0, negative = 0;

        rep(j, N)
        {
            if (A.at(j) > 0)
            {
                positive++;
            }
            else
            {
                negative++;
            }
        }

        if (abs(positive - negative) == 1)
        {
            return true;
        }

        sort(A.begin(), A.end(), [](ll a, ll b)
             { return abs(a) < abs(b); });

        ok = true;
        rep(i, N - 2)
        {
            if (A.at(i + 1) * A.at(i + 1) != A.at(i) * A.at(i + 2))
            {
                ok = false;
            }
        }
    }

    return ok;
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
