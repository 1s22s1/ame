#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, X;
    string A;
    cin >> N >> X >> A;
    --X;
    queue<int> q;
    q.push(X);
    A.at(X) = '@';

    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        if (0 <= pos - 1 && A.at(pos - 1) == '.')
        {
            A.at(pos - 1) = '@';
            q.push(pos - 1);
        }

        if (pos + 1 < N && A.at(pos + 1) == '.')
        {
            A.at(pos + 1) = '@';
            q.push(pos + 1);
        }
    }
    cout << A << endl;
    return 0;
}
