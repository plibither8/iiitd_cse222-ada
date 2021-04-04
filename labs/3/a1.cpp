#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int t[n];
  for (int i = 0; i < n; i++) cin >> t[i];

  int ans = -1;
  int mid, low = 1, high = t[n-1] - t[0];
  while (high >= low) {
    mid = (low + high) / 2;
    int prev = t[0], count = 1;

    for (int i = 1; i < n && count < k; i++) {
      if (t[i] - prev >= mid) {
        count++;
        prev = t[i];
      }
    }

    if (count == k) {
      low = mid + 1;
      ans = ans > mid ? ans : mid;
    } else {
      high = mid - 1;
    }
  }

  cout << ans;

  return 0;
}
