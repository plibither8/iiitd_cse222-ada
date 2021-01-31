// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#define MAX_SIZE 200100
#define INF 99999999.999999
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> point;

point P[MAX_SIZE];
// point Q[MAX_SIZE];

bool comp(const point &a, const point &b)
{
  return a.second > b.second;
}

ld dist(point A, point B)
{
  ld d = sqrtl(((A.first-B.first)*(A.first-B.first)) + ((A.second-B.second)*(A.second-B.second)));
  return d;
}

ld calculate_perimeter(point A, point B, point C)
{
  ld AB = dist(A, B);
  ld BC = dist(B, C);
  ld AC = dist(C, A);

  return AB + BC + AC;
}

ld min_perimeter_strip(point Q[], int n, ld p)
{
  ld minimum = p;
  // sort points according to y coordinate in descending order
  sort(Q, Q + n, comp);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; (j < n && abs(Q[i].second - Q[j].second) < minimum); j++) {
      for (int k = j + 1; (k < n && abs(Q[j].second - Q[k].second) < minimum); k++) {
        minimum = min(minimum, calculate_perimeter(Q[i], Q[j], Q[k]));
      }
    }
  }
  return minimum;
}

ld min_perimeter(point P[], int n)
{
  if (n < 5)  // ? O(1)
  {
    ld p = INF;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          p = min(p, calculate_perimeter(P[i], P[j], P[k]));
        }
      }
    }
    return p;
  }
  else
  {
    int mid = n / 2;
    point mid_point = P[mid];

    ld pl = min_perimeter(P, mid);
    ld pr = min_perimeter(P + mid, n - mid);

    ld p = min(pl, pr);

    point strip[n];
    int j = 0;
    for (int i = 0; i < n; i++) // ? O(n)
    {
      if (abs(P[i].first - mid_point.first) <= p / 2)
      {
        strip[j] = P[i];
        j++;
      }
    }
    return min(p, min_perimeter_strip(strip, j, p));
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%lld %lld", &P[i].first, &P[i].second);
  }

  sort(P, P + n);  // X-coordinate first | sorted by X
  ld ans = min_perimeter(P, n);
  printf("%.7Lf\n", ans);

  return 0;
}