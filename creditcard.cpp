#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

void solve() {
  double r, b, m;
  cin >> r >> b >> m;

  int ans = 0;
  double er = 1e-3;

  while (b >= er && ans <= 1200) {
    double intr = round(r * b) / 100;
    b += intr;
    b = round(b * 100) / 100;
    b -= m;
    ans++;
    if (b < er) continue;
  }
  printf((ans > 1200) ? "impossible" : "%d\n", ans);
  printf("\n");
}

int main() {
  int t;
  cin >> t;

  while (t--) solve();
}