// done
// https://codeforces.com/problemset/problem/1472/B
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    ll n;

    // n integers, a1, a2, ... an - candy weights
    // each candy is either 1 or 2

    cin >> t;

    while (t-- > 0)
    {
        cin >> n;
        ll c1 = 0;
        ll c2 = 0;
        while (n-- > 0)
        {
            ll x = 0;
            cin >> x;
            if (x == 1)
                c1++;
            else
                c2++;
        }

        if ((c1 * 1 + c2 * 2) % 2 == 1)
            cout << "NO\n";
        else
        {
            ll half = (c1 * 1 + c2 * 2) / 2;
            if (half % 2 == 0 || (half % 2 == 1 && c1 != 0)) // we have atleast 1 c1 ~ used to balance out the part
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
};