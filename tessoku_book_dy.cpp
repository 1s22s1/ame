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
    A.at(X) = '@';

    queue<ll> queue;
    queue.push(X);

    while (!queue.empty())
    {
        ll front = queue.front();
        queue.pop();

        if (front - 1 >= 0 && A.at(front - 1) == '.')
        {
            A.at(front - 1) = '@';
            queue.push(front - 1);
        }

        if (front + 1 < N && A.at(front + 1) == '.')
        {
            A.at(front + 1) = '@';
            queue.push(front + 1);
        }
    }

    cout << A << endl;

    return 0;
}
