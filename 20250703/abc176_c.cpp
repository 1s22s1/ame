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

    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A.at(i);
    }

    ll answer = 0;
    ll cur = A.at(0);

    for (ll i = 1; i < N; i++)
    {
        if (cur > A.at(i))
        {
            answer += cur - A.at(i);
        }
        else
        {
            cur = A.at(i);
        }
    }

    cout << answer << endl;

    return 0;
}
