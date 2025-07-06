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

    queue<string> queue;

    rep(i, Q)
    {
        ll type;
        cin >> type;

        switch (type)
        {
        case 1:
        {
            string name;
            cin >> name;

            queue.push(name);

            break;
        }
        case 2:
            cout << queue.front() << endl;

            break;

        case 3:
            queue.pop();

            break;
        }
    }

    return 0;
}
