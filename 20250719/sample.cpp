#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> vec = {4, 3, 2, 5, 1};

    auto max_it = max_element(vec.begin(), vec.end());
    auto index = distance(vec.begin(), max_it);

    cout << index << endl;

    return 0;
}
