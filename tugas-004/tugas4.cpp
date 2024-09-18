#include <iostream>
using namespace std;

int main() {
  int row;
  cout << "Banyak baris: ";
  cin >> row;

  cout << "// Sample pertama dengan for-loop" << endl;
  for (int i = 1; i <= row; i++) {
    cout << i << " ";
    for (int j = row; j >= i; j--) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  cout << "// Sample kedua dengan for-loop" << endl;
  for (int i = 1; i <= row; i++) {
    cout << i << " ";
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "// Sample pertama dengan while-loop" << endl;
  int a = 1;
  while (a <= row) {
    int j = row;
    cout << a << " ";
    while (j >= a) {
      cout << "* ";
      j--;
    }
    cout << endl;
    a++;
  }

  cout << endl;

  cout << "// Sample kedua dengan while-loop" << endl;
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

  return 0;
}