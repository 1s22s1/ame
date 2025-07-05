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

    ll T;
    cin >> T;

    rep(i, T)
    {
        ll N;
        cin >> N;
        vector<ll> A(N);
        rep(j, N)
        {
            cin >> A.at(j);
        }

        sort(A.begin(), A.end());

        bool satisfy = true;
        rep(k, N - 2)
        {
            if (A.at(k + 1) * A.at(k + 1) != A.at(k) * A.at(k + 2))
            {
                satisfy = false;
                break;
            }
        }

        if (satisfy)
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
