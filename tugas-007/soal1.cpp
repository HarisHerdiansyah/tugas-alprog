/**
 * Nama Program : Kalkulator matriks
 * Nama         : Haris Herdiansyah
 * NPM          : 140810240074
 * Tanggal Buat : 09 Oktober 2024
 * Deskripsi    : Program untuk menghitung penjumlahan dan perkalian matriks, tranpose, dan jumlah nilai pada baris atau kolom matriks
 */

#include <iostream>
using namespace std;

typedef int matrix[10][10];

void inputMatriks(matrix data_matrix, int &row, int &col) {
  cout << "Masukkan jumlah baris: ";
  cin >> row;
  cout << "Masukkan jumlah kolom: ";
  cin >> col;

  cout << "Masukkan data matriks: " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> data_matrix[i][j];
    }
  }
}

void cetakMatriks(matrix mtx, int row, int col) { 
  cout << "\nHasil:\n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << mtx[i][j] << " ";
    }
    cout << '\n';
  }
}

void cetakLarik(int array[], int n) {
  for (int i = 0; i < n; i++)
    cout << array[i] << " ";
}

void cariJumlahBaris(matrix mtx, int row, int col) {
  int jBaris[row];
  int jumlah = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      jumlah += mtx[i][j];
    }
    jBaris[i] = jumlah;
    jumlah = 0;
  }
  // cetak hasil
  cout << "\nJumlah baris: ";
  cetakLarik(jBaris, row);
}

void cariJumlahKolom(matrix mtx, int row, int col) {
  int jKolom[col];
  int jumlah = 0;
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      jumlah += mtx[j][i];
    }
    jKolom[i] = jumlah;
    jumlah = 0;
  }
  // cetak hasil
  cout << "\nJumlah kolom: ";
  cetakLarik(jKolom, col);
}

void penjumlahanMatriks(matrix mtx_a, matrix mtx_b, int row, int col) {
  matrix hasil;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      hasil[i][j] = mtx_a[i][j] + mtx_b[i][j];
    }
  }
  // cetak hasil
  cetakMatriks(hasil, row, col);
}

void perkalianMatriks(matrix mtx_a, matrix mtx_b, int row, int col) {
  matrix hasil;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      int jumlah = 0;
      for (int k = 0; k < col; k++) {
        jumlah += mtx_a[i][k] * mtx_b[k][j];
      }
      hasil[i][j] = jumlah;
    }
  }
  // cetak hasil
  cetakMatriks(hasil, row, row);
}

void transposeMatriks(matrix mtx, int row, int col) {
  matrix hasil;
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      hasil[i][j] = mtx[j][i];
    }
  }
  // cetak hasil
  cetakMatriks(hasil, col, row);
}

void menu(int &option) {
  cout << "1. Penjumlahan matriks" << endl;
  cout << "2. Perkalian matriks" << endl;
  cout << "3. Transpose matriks" << endl;
  cout << "4. Jumlah nilai baris dan kolom matriks" << endl;
  cout << "Pilih aksi: ";
  cin >> option;
}

void executor(int option) {
  int row_a, col_a, row_b, col_b;
  matrix mtx_a, mtx_b, hasil;

  switch (option) {
    case 1:
      cout << "Matriks pertama" << endl;
      inputMatriks(mtx_a, row_a, col_a);

      cout << "Matriks kedua" << endl;
      inputMatriks(mtx_b, row_b, col_b);

      if ((row_a != row_b) || (col_a != col_b)) {
        cout << "Ordo harus sama";
      } else {
        penjumlahanMatriks(mtx_a, mtx_b, row_a, col_a);
      }
      break;
    case 2:
      cout << "Matriks pertama" << endl;
      inputMatriks(mtx_a, row_a, col_a);

      cout << "Matriks kedua" << endl;
      inputMatriks(mtx_b, row_b, col_b);

      if (col_a != row_b) {
        cout << "Kolom matriks pertama harus sama dengan baris matriks kedua";
      } else {
        perkalianMatriks(mtx_a, mtx_b, row_a, col_a);
      }
      break;
    case 3:
      inputMatriks(mtx_a, row_a, col_a);
      transposeMatriks(mtx_a, row_a, col_a);
      break;
    case 4:
      inputMatriks(mtx_a, row_a, col_a);
      cariJumlahBaris(mtx_a, row_a, col_a);
      cariJumlahKolom(mtx_a, row_a, col_a);
      break;
  }
}

int main() {
  int option;
  menu(option);
  executor(option);
  return 0;
}