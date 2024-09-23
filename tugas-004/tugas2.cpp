/*
Nama Program  : Tabel Perhitungan Sederhana
Nama          : Haris Herdiansyah
NPM           : 140810240074
Tanggal Buat  : 18 September 2024
Deskripsi     : Program untuk mencetak tabel perhitungan dari sebuah nilai dimulai dari 1 s/d batas yang diberikan user dengan kalkulasi 1/X, X^2, X^3
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

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

  for (int i = 1; i <= bound; i++) {
    cout << '\n';
    cout << '|' << left << setw(14) << setfill(' ') << i;
    cout << '|' << left << setw(14) << setfill(' ') << (1.0 / i);
    cout << '|' << left << setw(14) << setfill(' ') << pow(i, 2);
    cout << '|' << left << setw(14) << setfill(' ') << pow(i, 3) << '|';
  }

  cout << setw(62) << setfill('-') << '\n';

  return 0;
}