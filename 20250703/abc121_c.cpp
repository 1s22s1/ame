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

    vector<pair<ll, ll>> vector(N);
    rep(i, N)
    {
        ll A, B;
        cin >> A >> B;

        vector.at(i) = {A, B};
    }

    sort(vector.begin(), vector.end());

    ll answer = 0;

    for (const auto &elem : vector)
    {
        if (M >= elem.second)
        {
            answer += elem.first * elem.second;
            M -= elem.second;
        }
        else
        {
            answer += elem.first * min(M, elem.second);
            M -= min(M, elem.second);
        }
    }

    cout << answer << endl;

    return 0;
}
