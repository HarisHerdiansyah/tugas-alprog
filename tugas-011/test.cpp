#include <iostream>
using namespace std;

int main() {
  int *n = new int(8);
  cout << sizeof(n) << endl;
  cout << sizeof(*n) << endl;
  return 0;
}