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

void solve(int n) {
  int mins = INT_MAX, maxs = INT_MIN;
  FORO(i, n) {
    int x;
    cin >> x;

    // nilai nya lebih kecil lagi dari mins
    if (mins > x) {
      mins = x;
    }
    // nilai nya ada yang lebih besar dari maxs
    if (maxs < x) {
      maxs = x;
    }
  }
  int range = maxs - mins;
  printf("%d %d %d\n", mins, maxs, range);
}

int main() {
  int n, t = 1;
  while (cin >> n) {
    printf("Case %d: ", t);
    solve(n);
    t++;
  }
}