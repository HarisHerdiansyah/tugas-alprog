/**
 * Nama Program : Kalkulator statistik
 * Nama         : Haris Herdiansyah
 * NPM          : 140810240074
 * Tanggal Buat : 09 Oktober 2024
 * Deskripsi    : Program untuk menghitung rata-rata, nilai tertinggi, nilai terendah, dan simpangan baku/standar deviasi dari array 1D.
 */

#include <iostream>
#include <cmath>
using namespace std;

typedef int array[50];

void print_result(string option, double value) {
  cout << "Nilai " << option << " dari data yang dimasukkan adalah " << value;
}

void input_data_count(int &n) {
  cout << "Masukkan jumlah data yang akan dihitung: ";
  cin >> n;
}

void input_data(array dataset, int n) {
  cout << "Masukkan data yang akan dihitung: ";
  for (int i = 0; i < n; i++) {
    cin >> dataset[i];
  }
}

void menu(int &option) {
  cout << "\n1. Rata-rata (void)" << endl;
  cout << "2. Rata-rata (fungsi)" << endl;
  cout << "3. Nilai tertinggi (void)" << endl;
  cout << "4. Nilai tertinggi (fungsi)" << endl;
  cout << "5. Nilai terendah (void)" << endl;
  cout << "6. Nilai terendah (fungsi)" << endl;
  cout << "7. Standar Deviasi (Simpangan Baku)" << endl;
  cout << "Pilih nilai yang akan dicari: ";
  cin >> option;
}

void get_avg(array dataset, double &avg, int n) {
  for (int i = 0; i < n; i++) {
    avg += dataset[i];
  }
  avg /= n;
}

double get_avg_fn(array dataset, int n) {
  double avg = 0;
  for (int i = 0; i < n; i++) {
    avg += dataset[i];
  }
  return avg /= n;
}

void get_max(array dataset, int &max, int n) {
  for (int i = 0; i < n; i++) {
    if (max < dataset[i]) max = dataset[i];
  }
}

int get_max_fn(array dataset, int n) {
  int max = -999;
  for (int i = 0; i < n; i++) {
    if (max < dataset[i]) max = dataset[i];
  }
  return max;
}

void get_min(array dataset, int &min, int n) {
  for (int i = 0; i < n; i++) {
    if (min > dataset[i]) min = dataset[i];
  }
}

int get_min_fn(array dataset, int n) {
  int min = 999;
  for (int i = 0; i < n; i++) {
    if (min > dataset[i]) min = dataset[i];
  }
  return min;
}

double get_standard_deviation(array dataset, int n) {
  double avg = get_avg_fn(dataset, n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += pow(dataset[i] - avg, 2);
  }
  return sqrt(total / n);
}

void executor(int option, array dataset, int n) { // ? int n adalah banyak data dan untuk semua fungsi
  double avg = 0;
  int min = 999, max = -999;
  switch (option) {
    case 1:
      get_avg(dataset, avg, n);
      print_result("rata-rata", avg);
      break;
    case 2:
      print_result("rata-rata", get_avg_fn(dataset, n));
      break;
    case 3:
      get_max(dataset, max, n);
      print_result("tertinggi", max);
      break;
    case 4:
      print_result("tertinggi", get_max_fn(dataset, n));
      break;
    case 5:
      get_min(dataset, min, n);
      print_result("terendah", min);
      break;
    case 6:
      print_result("terendah", get_min_fn(dataset, n));
      break;
    case 7:
      print_result("standar deviasi", get_standard_deviation(dataset, n));
      break;
  }
}

int main() {
  int n, option;
  array dataset;

  input_data_count(n);
  input_data(dataset, n);
  menu(option);
  executor(option, dataset, n);
  return 0;
}