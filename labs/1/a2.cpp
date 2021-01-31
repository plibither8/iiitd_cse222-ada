#include <iostream>

using namespace std;

long merge(long arr[], long temp[], long start, long mid, long end) {
  long i, j, k;
  long inv_count = 0;
  i = k = start;
  j = mid;
  while ((i <= mid - 1) && (j <= end)) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    }
    else {
      temp[k++] = arr[j++];
      inv_count += (mid - i);
    }
  }

  while (i <= mid - 1)
    temp[k++] = arr[i++];

  while (j <= end)
    temp[k++] = arr[j++];

  for (i = start; i <= end; i++)
    arr[i] = temp[i];

  return inv_count;
}

long count_inversions(long arr[], long temp[], long start, long end) {
  long mid, inv_count = 0;
  if (end > start) {
    mid = (end + start) / 2;
    inv_count = count_inversions(arr, temp, start, mid)
      + count_inversions(arr, temp, mid + 1, end)
      + merge(arr, temp, start, mid + 1, end);
  }
  return inv_count;
}

int main() {
  long t;
  cin >> t;
  while (t--) {
    long n,x;
    cin >> n;
    long reverse[100100];
    long ind[n], temp[n];

    for (long i = 0; i < n; i++) {
      cin >> x;
      reverse[x] = i;
    }
    for (long i = 0; i < n; i++) {
      cin >> x;
      ind[i] = reverse[x];
    };
    cout << count_inversions(ind, temp, 0, n - 1) << endl;
  }
}
