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

LL P(float Cw, float Cmax) {
  return 8 + ceil( (40.0*(Cw-4.0)) / (Cmax-4.0) );
}

LL fontWidth(float t, float p) {
  return ceil((9.0 * t * p) / 16.0);
}

void solve(LL w, LL n) {
  int maxOccur = -1;
  vector<pair<string, int>> wor;

  FORO(i, n) {
    string a;
    int b;
    cin >> a >> b;
    wor.pub({a, b});
    maxOccur = max(maxOccur, b);
  }

  LL ans = 0;

  LL usedWidth = 0;
  LL maxHeight = -1;
  FORO(i, n) {
    LL newWidth = fontWidth((float)wor[i].first.length(), P((float)wor[i].second, (float)maxOccur));
    if (usedWidth + newWidth > w) {
      ans += maxHeight;
      usedWidth = 0;
      maxHeight = -1;
    }
    usedWidth += newWidth + 10;
    maxHeight = max(maxHeight, P((float)wor[i].second, (float)maxOccur));
    if (i == n-1) ans += maxHeight;
  }

  printf("%lld\n", ans);
}

int main() {
  LL n, m;
  int t = 0;
  while (cin >> n >> m) {
    if (n && m) {
      printf("CLOUD %d: ", ++t);
      solve(n, m);
    } else break;
  }
}