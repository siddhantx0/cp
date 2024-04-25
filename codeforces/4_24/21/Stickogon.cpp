#include <iostream>
#include <vector>
#include <map> // Use map to handle arbitrary stick lengths
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> stickCounts; // Map to count occurrences of each stick length
        for (ll i = 0; i < n; i++)
        {
            ll length;
            cin >> length;
            stickCounts[length]++;
        }

        ll ans = 0;
        for (auto &entry : stickCounts)
        {
            // For each unique stick length, calculate how many polygons can be formed
            ans += entry.second / 3; // Each polygon requires at least 3 sticks of the same length
        }

        cout << ans << endl;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #define ll long long
// using namespace std;

// int main()
// {
//     // polygon with k sides requires k sticks of the same length.
//     // minimum 3 for 1
//     // minimum 3 for anyone
//     ll t;
//     cin >> t;

//     for (; t > 0; t--)
//     {
//         ll val;
//         cin >> val;
//         vector<ll> v(val);
//         for (; val > 0; val--)
//         {
//             ll val2;
//             cin >> val2;
//             v[val2]++;
//         }
//         ll ans = 0;
//         for (ll i = 0; i < sizeof(v) / sizeof(v[0]); ++i)
//             while (v[i] % 3 >= 0)
//             {
//                 ++ans;
//                 v[i] /= 3;
//             }

//         cout << ans;
//     }
// };