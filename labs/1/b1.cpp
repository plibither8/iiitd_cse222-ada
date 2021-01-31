// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#define MAX_SIZE 100100
#define INF 99999999.999999
using namespace std;
typedef long long int ll;
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
  ld d = sqrt(((A.first-B.first)*(A.first-B.first)) + ((A.second-B.second)*(A.second-B.second)));
  return d;
}

ld calculate_perimeter(point A, point B, point C)
{
  ld AB = dist(A, B);
  ld BC = dist(B, C);
  ld AC = dist(C, A);

  return AB + BC + AC;
}

ld min_perimeter(point P[], int n)
{
  ld p = INF;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        p = min(p, calculate_perimeter(P[i], P[j], P[k]));
      }
    }
  }
  return p;

}

int main()
{
  int n;
  // scanf("%d", &t);
  // while (t--)
  // {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      scanf("%lld %lld", &P[i].first, &P[i].second);
      // Q[i].first = P[i].second;
      // Q[i].second = P[i].first;
    }

    sort(P, P + n);  // X-coordinate first | sorted by X
    // sort(Q, Q + n);  // Y-coordinate first | sorted by Y
    ld ans = min_perimeter(P, n);
    printf("%.7Lf\n", ans);
  // }

    return 0;
}