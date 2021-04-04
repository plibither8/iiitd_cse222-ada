#include <iostream>

using namespace std;

int main() {
  int t, a, b;
  // cin >> t;
  t=1;

  while(t--) {
    cin >> a;
    cin >> b;

    bool opt[a+1][b+1];

    for(int i = 0; i <= a; i++) {
      for(int j = 0; j <= b; j++) {
        opt[i][j] = false;
      }
    }
    for (int i = 0; i <= a; i++) opt[i][0] = true;
    for (int i = 0; i <= b; i++) opt[0][i] = true;
    for (int i = 0; i <= (a < b ? a : b); i++) opt[i][i] = true;
    opt[0][0] = false;

    // OPT[i][j] = or_k=1,i|j(!OPT[i-k][j] || !OPT[i][j-k] || !OPT[i-k][j-k])
    for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= b; j++) {
        bool ans1 = false, ans2 = false, ans3 = false;
        int greater = i < j ? j : i;
        for (int k = 1; k <= greater; k++) {
          if (k <= i) ans1 = ans1 || !opt[i-k][j];
          if (k <= j) ans2 = ans2 || !opt[i][j-k];
          if (k <= (i < j ? i : j)) ans3 = ans3 || !opt[i-k][j-k];
        }
        opt[i][j] = ans1 || ans2 || ans3;
        // cout << "i=" << i << ";j=" << j << endl;
        // for(int i = 0; i <= a; i++) {
        //   for(int j = 0; j <= b; j++) {
        //     cout<< opt[i][j] << " ";
        //   }
        //   cout << "\n";
        // }
      }
    }

    // for(int i = 0; i <= a; i++) {
    //   for(int j = 0; j <= b; j++) {
    //     cout<< opt[i][j] << " ";
    //   }
    //   cout << "\n";
    // }
    cout<< (opt[a][b] ? "YES\n":"NO\n"); 
  }
  return 0;
}
