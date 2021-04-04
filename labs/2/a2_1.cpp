#include <iostream>
using namespace std;

int main() {
  int a, b, t, n = 1000;
  cin >> t;
  // t = 1;
  bool opt[n+1][n+1];
  bool num[n+1];
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      opt[i][j] = true;
    }
    num[i] = false;
  }
  opt[0][0] = false;
  num[0] = true;

  for (int i = 1; i <= n; i++) {
    int j;
    for (j = 0; j <= n; j++) {
      if (!num[j]) break;
    }
    if (j + i > n) continue;
    opt[j][j+i] = false;
    num[j] = num[i+j] = true;
  }

  while(t--) {
    cin >> a;
    cin >> b;

    if (a > b) {
      int s = a;
      a = b;
      b = s;
    }
    printf("%s", opt[a][b] ? "YES\n":"NO\n");
  }
}