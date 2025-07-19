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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> answer(N, 0);

    rep(i, Q)
    {
        ll x;
        cin >> x;

        if (x != 0)
        {
            cout << x << ' ';
            x--;
            answer.at(x)++;
        }
        else
        {
            auto min_it = min_element(answer.begin(), answer.end());
            auto index = distance(answer.begin(), min_it);

            cout << index + 1 << ' ';
            answer.at(index)++;
        }
    }

    cout << endl;

    return 0;
}
