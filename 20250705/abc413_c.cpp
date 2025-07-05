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
        ll pattern;
        cin >> pattern;

        if (pattern == 1)
        {
            ll c, x;
            cin >> c >> x;

            queue.push({x, c});
        }
        else
        {
            ll k;
            cin >> k;
            ll answer = 0;

            auto front_value = queue.front();

            while (k != 0)
            {
                if (k > front_value.second)
                {
                    answer += front_value.first * front_value.second;
                    k -= front_value.second;
                    queue.pop();
                    front_value = queue.front();
                }
                else
                {
                    answer += front_value.first * k;
                    queue.front().second = front_value.second - k;
                    k = 0;
                }
            }

            cout << answer << endl;
        }
    }

    return 0;
}
