#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void trig_table() {
  const float RADIAN = 3.14 / 180;
  int x = 0;
  while (x <= 360) {
    cout << '\n';
    cout << '|' << left << setw(14) << setfill(' ') << x;
    cout << '|' << left << setw(14) << setfill(' ') << setprecision(2) << sin(x * RADIAN);
    cout << '|' << left << setw(14) << setfill(' ') << setprecision(2) << cos(x * RADIAN) << '|';
    x += 30;
  }
  cout << setw(47) << setfill('-') << '\n';
}

int main() {
  cout << setw(47) << setfill('-') << '\n';
  cout << '|' << left << setw(14) << setfill(' ') << "X";
  cout << '|' << left << setw(14) << setfill(' ') << "Sinus(X)";
  cout << '|' << left << setw(14) << setfill(' ') << "Cosinus(X)" << '|';
  cout << setw(47) << setfill('-') << '\n';

  trig_table();
  return 0;
}