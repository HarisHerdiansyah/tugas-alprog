/*
Nama Program  : Evaluasi output
Nama          : Haris Herdiansyah
NPM           : 140810240074
Tanggal Buat  : 18 September 2024
Deskripsi     : Evaluasi output dari dua sample kode dengan perulangan for-loop dengan berbagai kondisi
*/

#include <iostream>
using namespace std;

int main() {
  // for (int i = 0; i < 8; i++) {
  //   if (i % 2 == 0)
  //     cout << "Nilai i sekarang: " << i << " <==> " << i + 1 << endl;
  //   else if (i % 3 == 0)
  //     cout << "Nilai i sekarang: " << i << " <==> " << i * i << endl;
  //   else if (i % 5 == 0)
  //     cout << "Nilai i sekarang: " << i << " <==> " << 2 * i - 1 << endl;
  //   else
  //     cout << "Nilai i sekarang: " << i << " <==> " << i << endl;
  // }

  for (int i = 0; i < 8; i++) {
    if (i % 2 == 0) cout << i + 1 << endl;
    else if (i % 3 == 0) continue;
    else if (i % 5 == 0) break;
    cout << "Akhir Program Dalam Loop" << endl;
  }
  cout << "Akhir Program Luar Loop" << endl;
  return 0;
}