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

    ll i = 0;
    while (i < N)
    {
        ll j = i;
        while (j < N - 1 && A.at(j) >= A.at(j + 1))
        {
            j++;
        }

        answer = max(answer, j - i);
        i = j + 1;
    }

    cout << answer << endl;

    return 0;
}
