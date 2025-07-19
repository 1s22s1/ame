#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

vector<pair<char, ll>> rle(string s)
{
    vector<pair<char, ll>> vec;

    ll i = 0;
    while (i < s.size())
    {
        ll j = i;
        while (j < s.size() && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.push_back({s.at(i), j - i});
        i = j;
    }

    return vec;
}

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string S;
    ll K;

    cin >> S >> K;

    auto compressed_S = rle(S);

    if (compressed_S.size() == 1)
    {
        cout << compressed_S.at(0).second / 2 * K << endl;

        return 0;
    }

    if (S.front() == S.back())
    {
        ll sum = 0;
        for (int i = 1; i < compressed_S.size() - 1; i++)
        {
            sum += compressed_S.at(i).second / 2;
        }

        cout << compressed_S.front().second / 2 + compressed_S.back().second / 2 + sum * K + (compressed_S.front().second + compressed_S.back().second) / 2 * (K - 1) << endl;
    }
    else
    {
        ll sum = 0;
        for (auto e : compressed_S)
        {
            sum += e.second / 2;
        }

        cout << sum * K << endl;
    }

    return 0;
}
