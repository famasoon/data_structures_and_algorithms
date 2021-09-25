#include<cstdio>
#include<iostream>
#include<climits>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int r[n];

  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }

  int min_value = r[0];
  int max_value = INT_MIN;

  for (int i = 1; i <= n - 1; i++) {
    max_value = max(max_value, r[i] - min_value);
    min_value = min(min_value, r[i]);
  }

  cout << max_value << endl;
  return 0;
}