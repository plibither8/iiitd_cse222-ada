#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

struct stock {
  int a;
  int b;
};

bool compare(stock s1, stock s2) {
  float m1 = (float) -s1.b*s1.b/(4*s1.a);
  float m2 = (float) -s2.b*s2.b/(4*s2.a);
  return m1 > m2;
};

int main() {
  int n, B;
  cin >> n >> B;
  stock s[n];
  for (int i = 0; i < n; i++) cin >> s[i].a >> s[i].b;
  sort(s, s + n, compare);
  int p = 0;
  for (int i = 0; i < n; i++) {
    if (B == 0) break;
    float x = (float) -s[i].b/(2*s[i].a);
    // if (x - floor(x) > 0.5) x = ceil(x);
    // else x = floor(x);
    x = floor(x);
    x = x <= B ? x : B;
    p += (s[i].a*x*x + s[i].b*x);
    B -= x;
  }
  cout << p;
  return 0;
}
