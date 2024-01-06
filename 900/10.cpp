//HELLGOD//
//Aham Brahmasmi//
#include <bits/stdc++.h>
using namespace std;
#define ll            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define nl             "\n"
#define len(x) ((ll)((x).size()))
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define mod 1000000007
typedef unsigned long long ull;
typedef long double lld;
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll gcd(ll a, ll b) { if (a == 0ll) { return b;} return gcd(b % a, a);}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
inline int power(int a, int b) {int x = 1; while (b) {if (b & 1) x *= a; a *= a; b >>= 1;} return x;}
const ll inf = 10000000000000000LL;
#define int long long
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> os; // find_by_order, order_of_key
int lcm(int a, int b) {
    return ((a * b) / (gcd(a, b)));
}

void solve() {
    int a, b;
    cin >> a >> b;
    vector<int>vec(a), pref(a);
    for (auto &it : vec)cin >> it;
    int curr = vec[0];
    pref[0] = curr;
    for (int i = 1; i < a; i++) {
        curr += vec[i];
        pref[i] = curr;
    }
    int total = pref.back();
    for (int i = 0; i < b; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        int res = 0;
        if (x >= 2) {
            res = pref[y - 1] -  pref[x - 2];
        } else {
            res = pref[y - 1] - 0;
        }
        debug(res);
        int nayatotal = total - res;
        int nayadd = z * (y - x + 1);
        debug(nayadd);
        int bro = nayatotal + nayadd;
        debug(bro);
        if (bro & 1) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }




}








signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
}
