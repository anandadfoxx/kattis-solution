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
  string s;
  cin >> s;
  int siz = s.length();

  int ans = 0;
  for (int i = siz-2; i >= 0; i -= 2) {
    int mul = (s[i] - '0') * 2;
    if (mul > 9) {
      int tmp = 0;
      while (mul > 0) {
        tmp += mul % 10;
        mul /= 10;
      }
      mul = tmp;
    }
    ans += mul;
  }
  for (int i = siz-1; i >= 0; i -= 2)
    ans += s[i] - '0';

  printf((ans % 10 == 0) ? "PASS" : "FAIL");
  printf("\n");
}

int main() {
  int t;
  cin >> t;

  while (t--) solve();
}