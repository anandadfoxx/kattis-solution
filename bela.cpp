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

int cardScore(string card, char dom) {
  if (card[1] == dom) {
    switch (card[0]) {
      case 'A':
        return 11;
      case 'K':
        return 4;
      case 'Q':
        return 3;
      case 'J':
        return 20;
      case 'T':
        return 10;
      case '9':
        return 14;
      case '8':
        return 0;
      case '7':
        return 0;
      default:
        return 0;
    }
  } else {
    switch (card[0]) {
      case 'A':
        return 11;
      case 'K':
        return 4;
      case 'Q':
        return 3;
      case 'J':
        return 2;
      case 'T':
        return 10;
      case '9':
        return 0;
      case '8':
        return 0;
      case '7':
        return 0;
      default:
        return 0;
    }
  }
}

int main() {
  int n;
  char dom;
  cin >> n >> dom;

  int ans = 0;

  while (n--) {
    FORO(i, 4) {
      string s;
      cin >> s;
      ans += cardScore(s, dom);
    }
  }
  cout << ans << '\n';
}