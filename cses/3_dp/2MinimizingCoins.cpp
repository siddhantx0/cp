#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n, x;       // x is the target value
    cin >> n >> x; // input all coins
    ll dp[x + 1];
    ll coins[n]; // n coins
    for (int i = 0; i < n; ++i)
        cin >> coins[i];

    dp[0] = 0;
    for (int i = 1; i < x + 1; ++i)
    {
        dp[i] = 1e9;            // set current to INF
        for (auto coin : coins) // check for each coin
            if (i - coin >= 0)
                dp[i] = min(dp[i], dp[i - coin] + 1);
    }

    cout << (dp[x] == 1e9 ? -1 : dp[x]);
};

// goal
/*
produce a sum of money x using available coins in a way where the # of coins is minimal
ie.
3 coins
sum of 11

{1, 5, 7}

--> 3 coins (2 5s and 1 1)
*/