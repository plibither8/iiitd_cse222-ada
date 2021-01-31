// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#define MAX_SIZE 100100
#define INF 99999999.999999
using namespace std;
typedef pair<double, double> point;
typedef long long int ll;

point P[MAX_SIZE];
// point Q[MAX_SIZE];

bool comp(const point &a, const point &b)
{
  return a.second > b.second;
}

double dist(point A, point B)
{
  double d = sqrt(((A.first-B.first)*(A.first-B.first)) + ((A.second-B.second)*(A.second-B.second)));
  return d;
}

double calculate_perimeter(point A, point B, point C)
{
  double AB = dist(A, B);
  double BC = dist(B, C);
  double AC = dist(C, A);
  return AB + BC + AC;
}

double min_perimeter_strip(point Q[], int n, int p)
{
  double minimum = p; // inf
  sort(Q, Q + n, comp); // sort points according to y coordinate desc
  // [(0, 1), (0, 0), (1, 0)]
  for (int i = 0; i < n; i++)
  {
    int window = min(n-i, 20);
    for (int j = 1; j < window; j++)
    {
      for (int k = j + 1; k < window; k++)
      {
        minimum = min(minimum, calculate_perimeter(Q[i], Q[i+j], Q[i+k])); 
      }
    }
  }
  return minimum;
}

double min_perimeter(point P[], int n)
{
  if (n < 3)
  {
    return INF;
  }
  else
  {
    int mid = n / 2;
    point mid_point = P[mid]; // (0, 1)

    double pl = min_perimeter(P, mid); // [(0,0)] => INF
    double pr = min_perimeter(P + mid, n - mid); // [(0,1),(1,0)] => INF

    double p = min(pl, pr); // => INF

    point strip[MAX_SIZE];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
      if (abs(P[i].first - mid_point.first) < p / 2)
      {
        strip[j].first = P[i].first;
        strip[j].second = P[i].second;
        // strip[j].first = P[i].second;
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
    scanf("%lf %lf", &P[i].first, &P[i].second);

  sort(P, P + n);  // X-coordinate first | sorted by X
  double ans = min_perimeter(P, n);
  printf("%.7lf\n", ans);

  return 0;
}