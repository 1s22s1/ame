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

    ll N, X;
    string A;

    cin >> N >> X >> A;
    X--;

    queue<ll> queue;
    queue.push(X);
    A.at(X) = '@';

    while (!queue.empty())
    {
        ll pos = queue.front();
        queue.pop();

        if (pos - 1 >= 0 && A.at(pos - 1) == '.')
        {
            A.at(pos - 1) = '@';
            queue.push(pos - 1);
        }

        if (pos + 1 < N && A.at(pos + 1) == '.')
        {
            A.at(pos + 1) = '@';
            queue.push(pos + 1);
        }
    }

    cout << A << endl;

    return 0;
}
