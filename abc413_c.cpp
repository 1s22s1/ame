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

    ll Q;
    cin >> Q;

    queue<pair<ll, ll>> queue;

    rep(i, Q)
    {
        ll type;
        cin >> type;

        switch (type)
        {
        case 1:
            ll c, x;
            cin >> c >> x;

            queue.push({x, c});

            break;
        case 2:
            ll k;
            cin >> k;

            ll answer = 0;

            while (k != 0)
            {
                if (k > queue.front().second)
                {
                    answer += queue.front().first * queue.front().second;
                    k -= queue.front().second;
                    queue.pop();
                }
                else
                {
                    answer += queue.front().first * k;
                    queue.front().second -= k;
                    k = 0;
                }
            }

            cout << answer << endl;

            break;
        }
    }

    return 0;
}
