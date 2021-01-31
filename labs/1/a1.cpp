#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a1[n];
    int a2[n];
    int pairs[n];
    int count = 0;
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (a1[i]==a2[j]) {
          pairs[i] = j;
          break;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (i < j && pairs[i] > pairs[j] || i > j && pairs[i] < pairs[j]) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
}
