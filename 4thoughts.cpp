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

map<int, string> ans;

int prio(char x) {
  if (x == '*' || x == '/') {
    return 2;
  } else if (x == '-' || x == '+') {
    return 1;
  } else return -1;
}

string postfix(string x) {
  string ans = "";
  stack<char> st;

  int len = x.length();

  FORO(i, len) {
    if (x[i] == '4') {
      ans += x[i];
    } else {
      if (st.empty()) {
        st.push(x[i]);
        continue;
      }
      char t = st.top();
      if (prio(x[i]) > prio(t)) {
        st.push(x[i]);
        continue;
      }
      while (prio(x[i]) <= prio(t) && !st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) t = st.top();
      }
      st.push(x[i]);
    }
  }
  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
  return ans;
}

void init(string op) {
  int len = op.length();
  if (len == 7) {
    string tmp = postfix(op);
    stack<int> res;

    FORO(i, len) {
      if (tmp[i] == '4') {
        res.push(4);
        continue;
      }
      int o1 = res.top();
      res.pop();
      int o2 = res.top();
      res.pop();

      switch (tmp[i])
      {
      case '+':
        res.push(o2+o1);
        break;
      case '-':
        res.push(o2-o1);
        break;
      case '*':
        res.push(o2*o1);
        break;
      case '/':
        res.push(o2/o1);
        break;
      }
    }
    int fin = res.top();
    ans[fin] = op;
    return;
  }
  
  char arr[4] = {'*', '/', '+', '-'};
  FORO(i, 4) {
    init(op+arr[i]+'4');
  }
}

void printout(string x, int ans) {
  string s = "";
  int len = x.length();

  if (len <= 0) {
    printf("no solution\n");
    return;
  }
  FORO(i, len) {
    s += x[i];
    s += ' ';
  }
  printf("%s= %d\n", s.c_str(), ans);
}

void solve() {
  LL n;
  cin >> n;

  printout(ans[n], n);
}

int main() {
  int t;
  cin >> t;
  init("4");

  for (auto i : ans) {
    printf("%s %d\n", i.sec.c_str(), i.fir);
  }
  while (t--) solve();
}