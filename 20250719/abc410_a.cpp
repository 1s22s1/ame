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

    ll N, K;

    cin >> N;

    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A.at(i);
    }

    cin >> K;

    ll answer = 0;

    for (auto a : A)
    {
        if (K <= a)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
