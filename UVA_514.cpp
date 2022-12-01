#include <iostream>
#include <stack>
using namespace std;
int main() {

  int n, k = 0;
  while (cin >> n) {
    if (n == 0)
      break;
    int a[n];
    while (cin >> a[0]) {
      if (a[0] == 0)
        break;
      stack<int> station;
      for (int i = 1; i < n; i++)
        cin >> a[i];
      k = 0;
      for (int i = 1; i <= n; i++) {
        station.push(i);
        while (!station.empty() && station.top() == a[k]) {
          station.pop();
          k++;
        }
      }
      if (station.empty())
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
    cout << endl;
  }
}
