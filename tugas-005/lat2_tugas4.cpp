#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void table_result(int &bound) {
  for (int i = 1; i <= bound; i++) {
    cout << '\n';
    cout << '|' << left << setw(14) << setfill(' ') << i;
    cout << '|' << left << setw(14) << setfill(' ') << (1.0 / i);
    cout << '|' << left << setw(14) << setfill(' ') << pow(i, 2);
    cout << '|' << left << setw(14) << setfill(' ') << pow(i, 3) << '|';
  }

  cout << setw(62) << setfill('-') << '\n';
}

int main() {
  int bound;
  cin >> bound;

  cout << setprecision(3);

  cout << setw(62) << setfill('-') << '\n';
  cout << '|' << left << setw(14) << setfill(' ') << "X";
  cout << '|' << left << setw(14) << setfill(' ') << "1/X";
  cout << '|' << left << setw(14) << setfill(' ') << "X ^ 2";
  cout << '|' << left << setw(14) << setfill(' ') << "X ^ 3" << '|';
  cout << setw(62) << setfill('-') << '\n';

  table_result(bound);

  return 0;
}