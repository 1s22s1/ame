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

    vector<string> vec(N);
    rep(i, N)
    {
        cin >> vec.at(i);
    }

    vector<string> connected_vec;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                connected_vec.push_back(vec.at(i) + vec.at(j));
            }
        }
    }

    sort(connected_vec.begin(), connected_vec.end());
    auto last = unique(connected_vec.begin(), connected_vec.end());
    connected_vec.erase(last, connected_vec.end());

    cout << connected_vec.size() << endl;

    return 0;
}
