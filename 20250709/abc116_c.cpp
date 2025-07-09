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

    ll N;
    cin >> N;

    vector<ll> H(N);
    rep(i, N)
    {
        cin >> H.at(i);
    }

    ll max_it = *max_element(H.begin(), H.end());
    ll answer = 0;

    for (ll i = 1; i <= max_it; i++)
    {
        ll j = 0;
        while (j < N)
        {
            ll k = j;
            if (H.at(k) >= i)
            {
                answer++;

                while (k < N && H.at(k) >= i)
                {
                    k++;
                }
            }
            else
            {
                while (k < N && H.at(k) < i)
                {
                    k++;
                }
            }

            j = k;
        }
    }

    cout << answer << endl;

    return 0;
}
