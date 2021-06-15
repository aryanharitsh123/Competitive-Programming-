#include <iostream>
using namespace std;

void calcShortestRoute(int n, int m, int a[], int b[]) {
  int right[n];
  int left[n];
  int rightCurr = -1;
  int leftCurr = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1)
      rightCurr = i;
    if (rightCurr != -1)
      right[i] = i - rightCurr;
    else
      right[i] = -1;
  }
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == 2)
      leftCurr = i;
    if (leftCurr != -1)
      left[i] = leftCurr - i;
    else
      left[i] = -1;
  }
  for (int i = 0; i < m; i++) {
    int dest = b[i] - 1;
    if (a[dest] == 1 || a[dest] == 2 || dest == 0) {
      cout << 0 << " ";
    } else {
      if (left[dest] > 0 && right[dest] > 0) {
        cout << min(left[dest], right[dest]) << " ";
      } else if (left[dest] > 0 && right[dest] < 0) {
        cout << left[dest] << " ";
      } else if (left[dest] < 0 && right[dest] > 0) {
        cout << right[dest] << " ";
      } else {
        cout << -1 << " ";
      }
    }
  }
}

int main() {
  // added the two lines below
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (size_t i = 0; i < n; i++) {
      cin >> a[i];
    }
    int b[m];
    for (size_t i = 0; i < m; i++) {
      cin >> b[i];
    }
    calcShortestRoute(n, m, a, b);
    cout << endl;
  }
  return 0;
}
