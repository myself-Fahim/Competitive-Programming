/* In the name of Allah, Most Gracious, Most Merciful*/
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
// for (auto &u : s)
// {
//     u = tolower(static_cast<unsigned char>(u));
// }

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        int n, k, count = 0, maxx = 0, val, flag2 = 0;
        cin >> n >> k;
        int l[n + 10], r[n + 10];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (l[i] <= k && r[i] >= k)
        //         count++;
        // }
        // if (count == 0)
        //     cout << "NO" << endl;
        map<int, int> m;
        for0(n)
        {
            if (l[i] <= k && r[i] >= k)
            {
                flag2 = 1;
                //  cout<<"ds"<<endl;
                // cout<<l[i]<<" "<<r[i]<<endl;
                int n1 = l[i], n2 = r[i];
                for (int i = n1; i <= n2; i++)
                {
                    // cout<<"dd"<<endl;
                    m[i]++;
                }
                // for (auto u : m)
                // {
                //     cout << u.first << " " << u.second << endl;
                // }
                // cout << endl
                //      << endl;
            }
        }
        if (flag2 == 1)
        {
            for (auto u : m)
            {
                if (u.second > maxx)
                {
                    maxx = u.second;
                    val = u.first;
                }
            }
            if (val == k)
            {
                int flag = 0;
                for (auto u : m)
                {
                    if (u.first == val)
                        continue;
                    else if (u.second == maxx)
                        flag = 1;
                }
                if (flag)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }

            else
                cout << "NO" << endl;
        }
        else
        cout<<"NO"<<endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}