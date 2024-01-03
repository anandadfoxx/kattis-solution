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

int main() {
  int x;
  cin >> x;

  if (x >= 100) {
    int low = x / 100;

    int g = low * 100 + 99, h = (low-1) * 100 + 99;
    if (g - x <= x - h) {
      x = g;
    } else {
      x = h;
    }
  } else x = 99;
  cout << x << '\n';
}