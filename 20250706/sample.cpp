#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> queue;

    for (int i = 0; i < 3; i++)
    {
        queue.push(i);
    }

    cout << queue.front() << endl;

    int front = queue.front();
    front = -1;

    cout << queue.front() << endl;

    return 0;
}
