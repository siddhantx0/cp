// done
#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll den[] = {100, 20, 10, 5, 1};
    ll out = 0;

    for (auto bill : den)
    {
        out += n / bill;
        n %= bill;
    }

    cout << out;
}

/*
dp approach doesn't work for super large test cases...
approach:
int main()
{
    ll n;
    cin >> n;
    ll den[] = {1, 5, 10, 20, 100};
    vector<ll> dp(n + 1);

    // minimum # of bills
    for (ll i = 1; i <= n; ++i)
    {
        dp[i] = 1e9 + 1;
        for (auto d : den)
        {
            if (i - d >= 0)
            {
                dp[i] = min(dp[i], dp[i - d] + 1);
            }
        }
    }
    cout << dp[n];
};
*/
