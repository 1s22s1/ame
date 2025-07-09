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

    ll max_h = *max_element(H.begin(), H.end());

    ll answer = 0;

    for (int h = 1; h <= max_h; h++)
    {
        ll i = 0;
        while (i < N)
        {
            ll j = i;
            if (H.at(i) >= h)
            {
                answer++;

                while (j < N && H.at(j) >= h)
                {
                    j++;
                }
            }
            else
            {
                while (j < N && H.at(j) < h)
                {
                    j++;
                }
            }

            i = j;
        }
    }

    cout << answer << endl;

    return 0;
}
