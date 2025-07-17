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
    rep(i, N)
    {
        while (i < N - 1 && A.at(i) == A.at(i + 1))
        {
            i++;
        }

        if (i < N - 1 && A.at(i) < A.at(i + 1))
        {
            while (i < N - 1 && A.at(i) <= A.at(i + 1))
            {
                i++;
            }
        }
        else
        {
            while (i < N - 1 && A.at(i) >= A.at(i + 1))
            {
                i++;
            }
        }

        answer++;
    }

    cout << answer << endl;

    return 0;
}
