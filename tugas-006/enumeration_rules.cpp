#include <iostream>
using namespace std;

// * Faktorial Void Non-Rekursif
void non_r_fact_void(int n) {
  long long int result = 1;
  if (n > 1) {
    for (int i = 1; i <= n; i++) {
      result *= i;
    }
  }
  cout << "Faktorial dari " << n << " adalah: " << result << " // Void" << endl;
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
void combination_void(int n, int r) {
  long long int K = r_fact_fn(n) / (r_fact_fn(n - r) * r_fact_fn(r));
  cout << "Kombinasi dari " << n << " dan " << r << " adalah: " << K << " // Void" << endl; 
}

// * Kombinasi Fungsi
long long int combination_fn(int n, int r) {
  return r_fact_fn(n) / (r_fact_fn(n - r) * r_fact_fn(r));
}

// * Permutasi Void
void permutation_void(int n, int r) {
  long long int P = r_fact_fn(n) / r_fact_fn(n - r);
  cout << "Permutasi dari " << n << " dan " << r << " adalah: " << P << " // Void" << endl; 
}

// * Permutasi Fungsi
long long int permutation_fn(int n, int r) {
  return r_fact_fn(n) / r_fact_fn(n - r);
}

// * Input Nilai n
void input_n(int &n) {
  cout << "Masukkan nilai n: ";
  cin >> n;
}

// * Input Nilai r
void input_r(int &r) {
  cout << "Masukkan nilai r: ";
  cin >> r;
}

void print_factorial(int &n) {
  non_r_fact_void(n);
  cout << "Faktorial dari " << n << " adalah: " << non_r_fact_fn(n) << " // Fungsi" << endl;
  cout << "Faktorial dari " << n << " adalah: " << r_fact_fn(n) << " // Rekursif" << endl;
}

void print_permutation(int &n, int &r) {
  permutation_void(n, r);
  cout << "Permutasi dari " << n << " dan " << r << " adalah: " << permutation_fn(n, r) << " // Fungsi" << endl; 
}

void print_combination(int &n, int &r) {
  combination_void(n, r);
  cout << "Kombinasi dari " << n << " dan " << r << " adalah: " << combination_fn(n, r) << " // Fungsi" << endl; 
}

void prompt_menu(int &menu, int &n, int &r) {
  cout << "1. Faktorial\n";
  cout << "2. Permutasi\n";
  cout << "3. Kombinasi\n";
  cout << "Hitung: ";
  cin >> menu;

  if (menu == 1) {
    input_n(n);
  } else if (menu == 2) {
    input_n(n);
    input_r(r);
  } else if (menu == 3) {
    input_n(n);
    input_r(r);
  }
}

int main() {
  int menu, n, r, K, P;
  prompt_menu(menu, n, r);

  if (menu == 1) {
    print_factorial(n);
  } else if (menu == 2) {
    print_permutation(n, r);
  } else if (menu == 3) {
    print_combination(n, r);
  }
  return 0;
}