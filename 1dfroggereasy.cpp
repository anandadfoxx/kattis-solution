#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

string ans[4] = {"magic", "left", "right", "cycle"};

int main() {
    int n, s, m;
    cin >> n >> s >> m;
    int arr[n];
    read_arr(arr, 0, n);

    // adhoc biasa
    s--;
    int hops = 0;
    bool vsted[n];
    memset(vsted, false, sizeof(vsted));

    short ls = -1;
    while (true) {
        if (arr[s] == m) ls = 0;
        else if (s < 0) ls = 1;
        else if (s >= n) ls = 2;
        else if (vsted[s]) ls = 3;
        
        if (ls != -1) break;
        
        hops++;
        vsted[s] = true;
        s += arr[s];
        
    }
    printf("%s\n%d\n", ans[ls].c_str(), hops);
}