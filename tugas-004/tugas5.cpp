/*
Nama Program  : Variasi pola bintang ukuran 10 x 10
Nama          : Haris Herdiansyah
NPM           : 140810240074
Tanggal Buat  : 18 September 2024
Deskripsi     : Variasi enam pola ukuran 10 x 10 (belah ketupat, tanda plus, huruf `E`, segienam, huruf `T`, dan hourglass)
*/

#include <iostream>
#include <string>
using namespace std;

void diamond() {
  string pattern;
  int n = 10;
  for (int i = 1; i <= n / 2; i++) {
    for (int j = (n / 2) - i; j >= 1; j--) {
      pattern += "  ";
    }
    for (int k = 1; k <= i; k++) {
      pattern += "* ";
    }
    for (int l = 1; l <= i; l++) {
      pattern += "* ";
    }
    pattern += '\n';
  }
  for (int a = 1; a <= n / 2; a++) {
    for (int b = 1; b <= a - 1; b++) {
      pattern += "  ";
    }
    for (int c = n / 2; c >= a; c--) {
      pattern += "* ";
    }
    for (int d = n / 2; d >= a; d--) {
      pattern += "* ";
    }
    pattern += '\n';
  }
  cout << pattern;
}

void plus_sign() {
  string pattern;
  int n = 10;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 5 || i == 6 || j == 5 || j == 6) {
        pattern += "* ";
      } else {
        pattern += "  ";
      }
    }
    pattern += '\n';
  }

  cout << pattern;
}

void alphabet_e() {
  string pattern;
  int n = 10;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ((i == 3 || i == 4 || i == 7 || i == 8) && j >= 3) {
        pattern += "  ";
      } else {
        pattern += "* ";
      }
    }
    pattern += '\n';
  }

  cout << pattern;
}

void hexagon() {
  string pattern;
  int n = 10;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ((i + j == 5) || (i + j == 17)) {
        pattern += "* ";
      } else if ((i >= 4 && i <= 7) && (j == 1 || j == 10)) {
        pattern += "* ";
      } else if ((i == 1 || i == 10) && (j >= 4 && j <= 7)) {
        pattern += "* ";
      } else if ((i == 8 || j == 8) && i + j == 10) {
        pattern += "* ";
      } else if ((i == 9 || j == 9) && i + j == 12) {
        pattern += "* ";
      } else {
        pattern += "  ";
      }
    }
    pattern += '\n';
  }

  cout << pattern;
}

void alphabet_t() {
  string pattern;
  int n = 10;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == 2 || j == 5 || j == 6) {
        pattern += "* ";
      } else {
        pattern += "  ";
      }
    }

    pattern += '\n';
  }

  cout << pattern;
}

void hourglass() {
  string pattern;
  int n = 10;

  for (int i = 1; i <= n / 2; i++) {
    for (int j = 0; j < i - 1; j++) {
      pattern += "  ";
    }
    for (int k = n / 2; k >= i; k--) {
      pattern += "* ";
    }
    for (int l = n / 2; l >= i; l--) {
      pattern += "* ";
    }
    pattern += '\n';
  }

  for (int a = 1; a <= n / 2; a++) {
    for (int b = (n / 2) - 1; b >= a; b--) {
      pattern += "  ";
    }
    for (int c = 1; c <= a; c++) {
      pattern += "* ";
    }
    for (int d = 1; d <= a; d++) {
      pattern += "* ";
    }
    pattern += '\n';
  }

  cout << pattern;
}

int main() {
  return 0;
}