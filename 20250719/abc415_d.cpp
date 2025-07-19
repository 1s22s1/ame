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

    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> AB(M);
    rep(i, M)
    {
        ll A, B;
        cin >> A >> B;

        AB.at(i) = {A, B};
    }

    ll answer = 0;
    ll bin = 0;
    while (true)
    {
        bin += N;
        N = 0;
        bool initialized = false;

        pair<ll, ll> raito;
        rep(i, M)
        {
            if (AB.at(i).first <= bin)
            {
                if (!initialized)
                {
                    raito = AB.at(i);
                    initialized = true;
                }
                else
                {
                    if ((double)raito.second / (double)raito.first <= (double)AB.at(i).second / (double)AB.at(i).first)
                    {
                        raito = AB.at(i);
                    }
                    // if (1LL * raito.first * AB.at(i).second <= 1LL * raito.second * AB.at(i).first)
                    // {
                    //     raito = AB.at(i);
                    // }
                }
            }
        }

        if (!initialized)
        {
            break;
        }

        if (bin < raito.first)
        {
            break;
        }

        answer += bin / raito.first;
        N += bin / raito.first * raito.second;

        while (bin < raito.first)
        {
            bin = bin - raito.first + raito.second;
        }
    }

    cout << answer << endl;

    return 0;
}
