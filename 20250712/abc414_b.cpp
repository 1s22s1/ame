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

    ll answer_length = 0;
    string answer = "";
    bool too_long = false;

    rep(i, N)
    {
        char c;
        ll l;
        cin >> c >> l;

        answer_length += l;
        if (answer_length > 100)
        {
            too_long = true;
        }

        if (!too_long)
        {
            answer = answer + string(l, c);
        }
    }

    if (too_long)
    {
        cout << "Too Long" << endl;
    }
    else
    {
        cout << answer << endl;
    }

    return 0;
}
