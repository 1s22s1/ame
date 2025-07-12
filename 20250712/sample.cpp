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

constexpr std::string ToBaseN(unsigned long long n, const unsigned int base)
{
    if ((base < 2) || (36 < base))
    {
        throw std::invalid_argument{"base must be in the range [2, 36]."};
    }

    constexpr char Digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string s;

    do
    {
        s.push_back(Digits[n % base]);
        n /= base;
    } while (n);

    std::ranges::reverse(s);
    return s;
}

int main()
{
    init();

    ll A, N;
    cin >> A >> N;

    ll answer = 0;

    rep(i, N)
    {
        string str_i = to_string(i);
        string reverse_str_i = str_i;
        reverse(reverse_str_i.begin(), reverse_str_i.end());

        if (str_i == reverse_str_i)
        {
            string str_j = ToBaseN(i, A);
            string reverse_str_j = str_j;
            reverse(reverse_str_j.begin(), reverse_str_j.end());

            if (str_j == reverse_str_j)
            {
                answer += i;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
