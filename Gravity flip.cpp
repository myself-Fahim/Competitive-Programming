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

void Ahlan_Wa_Sahlan()
{
    optimize();
    int n, sum = 0;
    cin >> n;
    vi v(n);
    for0(n)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    for (auto u : v)
    {
        cout << u << " ";
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
