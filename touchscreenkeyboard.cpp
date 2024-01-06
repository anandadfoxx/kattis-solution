#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
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

map<char, pair<int, int>> pos;
void init() {
  vector<vector<char>> tt = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm'}};
  for (int i = 0; i < tt.size(); i++) {
    for (int j = 0; j < tt[i].size(); j++) {
      pos[tt[i][j]] = {i, j};
    }
  }
}

void solve() {
  string pro;
  int n;
  cin >> pro >> n;
  pair<string, int> po[n];

  FORO(i, n) {
    string s;
    cin >> s;

    int len = s.length();
    int dist = 0;
    FORO(k, len) {
      dist += abs(pos[s[k]].sec - pos[pro[k]].sec) + abs(pos[s[k]].first - pos[pro[k]].first);
    }
    po[i] = {s, dist};
  }
  sort(po, po+n, [](pair<string, int> a, pair<string, int> b) {
    if (a.sec == b.sec) return a.first < b.first;
    return a.sec < b.sec;
  });

  FORO(i, n) {
    printf("%s %d\n", po[i].fir.c_str(), po[i].sec);
  }
}

int main() {
  init();
  int t;
  cin >> t;

  while (t--) solve();
}