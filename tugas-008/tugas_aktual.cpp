#include <iostream>
using namespace std;

typedef int larik[100];

void tukar_nilai(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void tampilkan_data(larik x, int n) {
  for (int i = 0; i < n; i++) {
    cout << x[i] << " ";
  }
}

void asc_bs_1(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    for (int j = 0; j < n - i - 1; j++) {
      if (x[j] > x[j + 1]) {
        tukar_nilai(x[j], x[j + 1]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void asc_bs_2(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    for (int j = n - 1; j >= i + 1; j--) {
      if (x[j] < x[j - 1]) {
        tukar_nilai(x[j], x[j - 1]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void asc_bs_3(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int idx_min = i;
    for (int j = i; j < n; j++) {
      if (x[idx_min] > x[j]) {
        tukar_nilai(x[idx_min], x[j]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void dsc_bs_1(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    for (int j = 0; j < n - i - 1; j++) {
      if (x[j] < x[j + 1]) {
        tukar_nilai(x[j], x[j + 1]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void dsc_bs_2(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    for (int j = n - 1; j >= i + 1; j--) {
      if (x[j] > x[j - 1]) {
        tukar_nilai(x[j], x[j - 1]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void dsc_bs_3(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int idx_max = i;
    for (int j = i; j < n; j++) {
      if (x[idx_max] < x[j]) {
        tukar_nilai(x[idx_max], x[j]);
      }
      tampilkan_data(x, n);
      cout << endl;
    }
    cout << endl;
  }
}

void asc_sel_sort(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int idx_min = i;
    for (int j = i + 1; j < n; j++) {
      if (x[idx_min] > x[j]) {
        idx_min = j;
      }
    }
    tukar_nilai(x[i], x[idx_min]);
    tampilkan_data(x, n);
  } 
}

void dsc_sel_sort(larik x, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int idx_max = i;
    for (int j = i + 1; j < n; j++) {
      if (x[idx_max] < x[j]) {
        idx_max = j;
      }
    }
    tukar_nilai(x[i], x[idx_max]);
    tampilkan_data(x, n);
  } 
}

void asc_ins_sort(larik x, int n) {
  for (int i = 1; i < n; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int temp = x[i];
    int idx = i;
    for (int j = i - 1; j >= 0; j--) {
      if (x[j] > temp) {
        x[j + 1] = x[j];
        idx = j;
      } else {
        break;
      }
    }
    x[idx] = temp;
  }
}

void dsc_ins_sort(larik x, int n) {
  for (int i = 1; i < n; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cout << "Data: ";
    tampilkan_data(x, n);
    cout << endl;

    int temp = x[i];
    int idx = i;
    for (int j = i - 1; j >= 0; j--) {
      if (x[j] < temp) {
        x[j + 1] = x[j];
        idx = j;
      } else {
        break;
      }
    }
    x[idx] = temp;
  }
}

void menu(int &fn, int &opsi) {
  cout << "1. Bubble sort (cara 1)" << endl;
  cout << "2. Bubble sort (cara 2)" << endl;
  cout << "3. Bubble sort (cara 3)" << endl;
  cout << "4. Selection sort" << endl;
  cout << "5. Insertion sort" << endl;
  cout << "6. Shell sort" << endl;
  cout << "Masukkan fungsi pengurutan: "; cin >> fn;
  cout << endl;

  cout << "1. Pengurutan dari paling kecil ke paling besar (ASC)" << endl;
  cout << "2. Pengurutan dari paling besar ke paling kecil (DSC)" << endl;
  cout << "Masukkan opsi pengurutan: "; cin >> opsi;
  cout << endl;
}

void input_data(int &n, larik x) {
  cout << "Masukkan banyak data: "; cin >> n;
  cout << "Masukkan data: ";
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
}

void urutkan_data(int fn, int opsi, int n, larik x) {
  if (opsi == 1) {
    switch (fn) {
      case 1:
        asc_bs_1(x, n);
        break;
      case 2:
        asc_bs_2(x, n);
        break;
      case 3:
        asc_bs_3(x, n);
        break;
      case 4:
        asc_sel_sort(x, n);
        break;
      case 5:
        asc_ins_sort(x, n);
        break;
      case 6:
        break;
    }
  } else if (opsi == 2) {
    switch (fn) {
      case 1:
        dsc_bs_1(x, n);
        break;
      case 2:
        dsc_bs_2(x, n);
        break;
      case 3:
        dsc_bs_3(x, n);
        break;
      case 4:
        dsc_sel_sort(x, n);
        break;
      case 5:
        dsc_ins_sort(x, n);
        break;
      case 6:
        break;
    }
  }
}

int main() {
  int fn, opsi, n;
  larik x;
  menu(fn, opsi);
  input_data(n, x);
  urutkan_data(fn, opsi, n, x);
  cout << "Hasil akhir: "; tampilkan_data(x, n);
  return 0;
}