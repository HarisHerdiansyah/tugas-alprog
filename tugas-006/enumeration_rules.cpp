/**
 * Nama Program : Faktorial, Permutasi, dan Kombinas
 * Nama         : Haris Herdiansyah
 * NPM          : 140810240074
 * Tanggal Buat : 01 Oktober 2024
 */

#include <iostream>
#include <string>
using namespace std;

// * Faktorial Void Non-Rekursif
void non_r_fact_void(int n, long long int &result) {
  if (n > 1) {
    for (int i = 1; i <= n; i++) {
      result *= i;
    }
  }
}

// * Faktorial Fungsi Non-Rekursif
long long int non_r_fact_fn(int n) {
  long long int result = 1;
  if (n > 1) {
    for (int i = 1; i <= n; i++) {
      result *= i;
    }
  }
  return result;
}

// * Faktorial Fungsi Rekursif
long long int r_fact_fn(int n) {
  if (n == 1 || n == 0) {
    return 1;
  }
  return n * r_fact_fn(n - 1);
}

// * Kombinasi Void
void combination_void(int n, int r, long long int &result) {
  result = r_fact_fn(n) / (r_fact_fn(n - r) * r_fact_fn(r));
}

// * Kombinasi Fungsi
long long int combination_fn(int n, int r) {
  return r_fact_fn(n) / (r_fact_fn(n - r) * r_fact_fn(r));
}

// * Permutasi Void
void permutation_void(int n, int r, long long int &result) {
  result = r_fact_fn(n) / r_fact_fn(n - r);
}

// * Permutasi Fungsi
long long int permutation_fn(int n, int r) {
  return r_fact_fn(n) / r_fact_fn(n - r);
}

void input_menu(int &menu, int &n, int &r) {
  bool is_input_valid = false;

  while (!is_input_valid) {
    cout << "Pilih salah satu di bawah ini: \n";
    cout << "1. Faktorial Non Rekursif\n";
    cout << "2. Faktorial Non Rekursif Void\n";
    cout << "3. Faktorial Rekursif\n";
    cout << "4. Permutasi\n";
    cout << "5. Permutasi Void\n";
    cout << "6. Kombinasi\n";
    cout << "7. Kombinasi Void\n";
    cout << "99. Keluar\n";

    cout << "Input: ";
    cin >> menu;

    is_input_valid = menu >= 1 && menu <= 7 || menu == 99;
  }
}

void input_value(int &val, string code) {
  bool is_input_valid = false;

  while (!is_input_valid) {
    cout << "Masukkan nilai " + code << ": ";
    cin >> val;

    is_input_valid = val >= 0;
  }
}

void print_calculation(int &menu, int &n, int &r) {
  long long int result = 1;
  switch (menu) {
    case 1:
      result = non_r_fact_fn(n);
      cout << "Faktorial dari " << n << ": " << result << " // Fungsi";
      break;
    case 2:
      non_r_fact_void(n, result);
      cout << "Faktorial dari " << n << ": " << result << " // Void";
      break;
    case 3:
      result = r_fact_fn(n);
      cout << "Faktorial dari " << n << ": " << result << " // Rekursif";
      break;
    case 4:
      result = permutation_fn(n, r);
      cout << "Permutasi dari " << n << " dan " << r << ": " << result << " // Fungsi";
      break;
    case 5:
      permutation_void(n, r, result);
      cout << "Permutasi dari " << n << " dan " << r << ": " << result << " // Void";
      break;
    case 6:
      result = combination_fn(n, r);
      cout << "Kombinasi dari " << n << " dan " << r << ": " << result << " // Fungsi";
      break;
    case 7:
      combination_void(n, r, result);
      cout << "Kombinasi dari " << n << " dan " << r << ": " << result << " // Void";
      break;
  }
}

int main() {
  int menu, n, r;
  
  cout << endl;
  input_menu(menu, n, r);
  if (menu == 99) return 0;

  input_value(n, "n");
  if (menu >= 4 && menu <= 7) input_value(r, "r");

  print_calculation(menu, n, r);
  cout << endl;
  return 0;
}