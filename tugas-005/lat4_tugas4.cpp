#include <iostream>
using namespace std;

void forl_triangle(int &row) {
  for (int i = 1; i <= row; i++) {
    cout << i << " ";
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void forl_invert_triangle(int &row) {
  for (int i = 1; i <= row; i++) {
    cout << i << " ";
    for (int j = row; j >= i; j--) {
      cout << "* ";
    }
    cout << endl;
  }
}

void whilel_triangle(int &row) {
  int i = 1;
  while (i <= row) {
    int j = 1;
    cout << i << " ";
    while (j <= i) {
      cout << "* ";
      j++;
    }
    cout << endl;
    i++;
  }
}

void whilel_invert_triangle(int &row) {
  int i = 1;
  while (i <= row) {
    int j = row;
    cout << i << " ";
    while (j >= i) {
      cout << "* ";
      j--;
    }
    cout << endl;
    i++;
  }
}

int main() {
  int row;
  cin >> row;

  forl_triangle(row);
  forl_invert_triangle(row);
  whilel_triangle(row);
  whilel_invert_triangle(row);

  return 0;
}