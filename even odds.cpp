#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
#define ascii(n) static_cast<int>(n);
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i <= (n); i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first > p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return 0;
    // Or *(-1) with p.first
}
// map complexity log2(n)

void Ahlan_Wa_Sahlan()
{
    optimize();
    ll n, k, ans;
    cin >> n >> k;
    if (n & 1)
    {
        if (k <= ((n / 2) + 1))
            cout << k + (k - 1) << endl;
        else
        {
            ans = k - ((n / 2) + 1);
            cout << ans * 2 << endl;
        }
    }
    else
    {
         if (k <= (n / 2))
            cout << k + (k - 1) << endl;
        else
        {
            ans = k - (n / 2);
            cout << ans * 2 << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}