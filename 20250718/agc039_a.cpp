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

vector<pair<char, int>> rle(string s)
{
    vector<pair<char, int>> vec;

    int i = 0;
    while (i < s.size())
    {
        int j = i;
        while (j < s.size() && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.push_back({s.at(i), j - i});
        i = j;
    }

    return vec;
}

int main()
{
    init();

    string S;
    ll K;

    cin >> S >> K;

    auto compressed = rle(S);

    if (S.front() == S.back())
    {
        if (compressed.size() == 1)
        {
            cout << compressed.at(0).second / 2 * K << endl;

            return 0;
        }

        ll sum = 0;
        for (int i = 1; i < compressed.size() - 1; i++)
        {
            sum += compressed.at(i).second / 2;
        }

        cout << sum * K + compressed.front().second / 2 + compressed.back().second / 2 + (compressed.front().second + compressed.back().second) / 2 * (K - 1) << endl;
    }
    else
    {
        ll sum = 0;
        for (const auto &p : compressed)
        {
            sum += p.second / 2;
        }

        cout << sum * K << endl;
    }

    return 0;
}
