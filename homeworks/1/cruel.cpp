#include <iostream>

using namespace std;

void unusual(int A[], int n) { // n = 4
  for (int i = 0; i < n; i++) cout << A[i] << " ";
  cout << endl;
  // for (int i = 0; i < 8; i++) cout << A[i] << " "; cout << endl;
  if (n == 2) {
    int a = A[0];
    A[0] = A[1];
    A[1] = a;
  } else {
    for (int i = 0; i < n / 4; i++) { // i = 0
      // 
      int a = A[i + n / 4]; // a = A[1] = 4
      A[i + n / 4] = A[i + n / 2]; // A[1] = A[2] = 3
      A[i + n / 2] = a; // A[2] = 4
    }
    unusual(A, n / 2);
    unusual(A + n / 2, n / 2);
    unusual(A + n / 4, n / 2);
  }
}

void cruel(int A[], int n) {
  if (n > 1) {
    cruel(A, n / 2);
    cruel(A + n / 2, n / 2);
    unusual(A, n);
  }
}

int main() {
  int A[] = {3, 2, 4, 1, 2, 4, 3, 1};
  cruel(A, 8);
  for (int i = 0; i < 8; i++) cout << A[i] << " ";
  cout << endl;
  return 0;
}
