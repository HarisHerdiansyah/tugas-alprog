#include <iostream>
using namespace std;

void if_else_wording(int num) {
  if (num == 1)
    cout << "Satu" << endl;
  if (num == 2)
    cout << "Dua" << endl;
  if (num == 3)
    cout << "Tiga" << endl;
  if (num == 4)
    cout << "Empat" << endl;
  if (num == 5)
    cout << "Lima" << endl;
  if (num == 6)
    cout << "Enam" << endl;
  if (num == 7)
    cout << "Tujuh" << endl;
  if (num == 8)
    cout << "Delapan" << endl;
  if (num == 9)
    cout << "Sembilan" << endl;
  if (num == 10)
    cout << "Sepuluh" << endl;
}

void switch_case_wording(int num) {
  switch (num) {
  case 1:
    cout << "Satu" << endl;
    break;
  case 2:
    cout << "Dua" << endl;
    break;
  case 3:
    cout << "Tiga" << endl;
    break;
  case 4:
    cout << "Empat" << endl;
    break;
  case 5:
    cout << "Lima" << endl;
    break;
  case 6:
    cout << "Enam" << endl;
    break;
  case 7:
    cout << "Tujuh" << endl;
    break;
  case 8:
    cout << "Delapan" << endl;
    break;
  case 9:
    cout << "Sembilan" << endl;
    break;
  case 10:
    cout << "Sepuluh" << endl;
    break;
  }
}

int main() {
  int num;
  cin >> num;

  if (num < 1 || num > 10) {
    cout << "Invalid number" << endl;
  } else {
    if_else_wording(num);
    switch_case_wording(num);
  }

  return 0;
}