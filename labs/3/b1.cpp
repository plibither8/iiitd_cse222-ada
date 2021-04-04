#include <iostream>

using namespace std;

int main() {
  int n, B, a, b, max = 0;
  cin >> n >> B;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    int p = a*B*B + b*B;
    if (p > max) max = p;
  }
  cout << max;
  return 0;
}
