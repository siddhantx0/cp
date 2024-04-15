#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll dp[n + 1];
    dp[0] = 1;

    ll mod = 1e9 + 7;
    for (int i = 1; i < n + 1; ++i)
    {
        dp[i] = 0; // set current to 0
        for (int j = 1; j <= 6; ++j)
        { // potential dice roll
            if (i - j >= 0)
            {
                dp[i] += dp[i - j];
                dp[i] %= mod; // divide by modulo
            }
        }
    }
    cout << dp[n];
};

// goal
/*
count the # of ways to construct a sum "n" by throwing a dice 1 or more times

if n = 3
1 + 1 + 1
1 + 2
2 + 1
3

therefore, 4 ways
*/