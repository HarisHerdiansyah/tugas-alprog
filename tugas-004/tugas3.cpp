#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 8; i++) {
    if (i % 2 == 0) cout << i + 1 << endl;
    else if (i % 3 == 0) cout << i * i << endl;
    else if (i % 5 == 0) cout << 2 * i - 1 << endl;
    else cout << i << endl;
  }
  return 0;
}