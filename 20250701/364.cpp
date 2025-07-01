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

    ll okashi_count = 0;
    ll answer = 0;

    while (okashi_count < N)
    {
        if (okashi_count * 3 < N && okashi_count != 0)
        {
            okashi_count *= 3;
        }
        else
        {
            okashi_count++;
        }

        answer++;
    }

    cout << answer << endl;

    return 0;
}
