/*
    Kelompok 10
    Nama anggota kelompok : Aulia Ramdani Nur / 140810240002
                            Risyam Muhammad Iesqillah / 140810240032
                            Haris Herdiansyah / 140810240074
    Deskripsi program : Program sorting Ascending, Descending, bubble sort, selection sort, insertion sort, dan shell sort.
*/

#include <bits/stdc++.h>
using namespace std;

typedef string larik[256];

void tukarNilai(string &x, string &y) {
  string temp = x;
  x = y;
  y = temp;
}

void cetakLarik(larik dataset, int size) {
  for (int i = 0; i < size; i++) {
    cout << dataset[i];
    if (i < size-1) cout << ", ";
  }
}

bool isSorted(larik dataset, int size) {
  // TODO masih perlu custom handling, kalo data terurut tapi descending, bakal tetap nge-return false
  for (int i = 0; i < size - 1; i++) {
    if (dataset[i] > dataset[i+1]) {
      return false;
    }
  }
  return true;
}

string toLowerCase(string str) {
  string hasil = "";
  for (char s: str) {
    hasil += tolower(s);
  }
  return hasil;
}

// Bubble sort cara 1 Ascending
void bubbleSortCara1A(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 1 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = 0; j < size - i - 1; j++) {
      if (toLowerCase(dataset[j]) > toLowerCase(dataset[j + 1])) {
        tukarNilai(dataset[j], dataset[j + 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 1 Descending
void bubbleSortCara1D(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 1 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = 0; j < size - i - 1; j++) {
      if (toLowerCase(dataset[j]) < toLowerCase(dataset[j + 1])) {
        tukarNilai(dataset[j], dataset[j + 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 2 Ascending
void bubbleSortCara2A(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 2 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = size - 1; j >= i + 1; j--) {
      if (toLowerCase(dataset[j]) < toLowerCase(dataset[j - 1])) {
        tukarNilai(dataset[j], dataset[j - 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 2 Decending
void bubbleSortCara2D(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 2 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = size - 1; j >= i + 1; j--) {
      if (toLowerCase(dataset[j]) > toLowerCase(dataset[j - 1])) {
        tukarNilai(dataset[j], dataset[j - 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 3 Ascending
void bubbleSortCara3A(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 3 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = i + 1; j < size; j++) {
      if (toLowerCase(dataset[idx_min]) > toLowerCase(dataset[j])) {
        tukarNilai(dataset[idx_min], dataset[j]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 3 Descending
void bubbleSortCara3D(larik dataset, int size) {
  cout << "\n===== Bubble sort cara 3 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = i + 1; j < size; j++) {
      if (toLowerCase(dataset[idx_min]) < toLowerCase(dataset[j])) {
        tukarNilai(dataset[idx_min], dataset[j]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Selection sort Ascending
void selectionSortA(larik dataset, int size) {
  cout << "\n===== Selection sort Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    for (int j = i + 1; j < size; j++) {
      if (toLowerCase(dataset[idx_min]) > toLowerCase(dataset[j])) {
        idx_min = j;
      }
    }
    tukarNilai(dataset[i], dataset[idx_min]);
    cout << "i = " << i << ", posisi " << idx_min << ": ";
    cetakLarik(dataset, size);
    cout << endl;
  }
  cout << endl;
}

// Selection sort Descending
void selectionSortD(larik dataset, int size) {
  cout << "\n===== Selection sort Descending =====" << endl;
  for (int i = 0; i < size; i++) {
    int idx_max = i;
    for (int j = i + 1; j < size; j++) {
      if (toLowerCase(dataset[idx_max]) < toLowerCase(dataset[j])) {
        idx_max = j;
      }
    }
    tukarNilai(dataset[i], dataset[idx_max]);
    cout << "i = " << i << ", posisi " << idx_max << ": ";
    cetakLarik(dataset, size);
    cout << endl;
  }
}

// Insertion sort Ascending
void insertionSortA(larik dataset, int size) {
  cout << "\n===== Insertion sort Ascending =====" << endl;
  for (int i = 1; i < size; i++) {
    cout << "Proses ke-" << i << ": ";
    for (int j = i; j >= 1; j--) {
      if (toLowerCase(dataset[j]) < toLowerCase(dataset[j - 1])) {
        tukarNilai(dataset[j], dataset[j - 1]);
      } else {
        break;
      }
    }
    cetakLarik(dataset, size);
    cout << endl;
  }
}

// Insertion sort Descending
void insertionSortD(larik dataset, int size) {
  cout << "\n===== Insertion sort Descending =====" << endl;
  for (int i = 1; i < size; i++) {
    cout << "Proses ke-" << i << ": ";
    for (int j = i; j >= 1; j--) {
      if (toLowerCase(dataset[j]) > toLowerCase(dataset[j - 1])) {
        tukarNilai(dataset[j], dataset[j - 1]);
      } else {
        break;
      }
    }
    cetakLarik(dataset, size);
    cout << endl;
  }
}

// Shell sort Ascending
// Karena fungsi dipakai untuk mengurutkan data ketika Binary search dipanggil
// ditambahkan paramater baru `print` dengan default value true, agar proses
// hanya ditampilkan ketika `print` bernilai `true`
void shellSortA(larik dataset, int size, bool print = true) {
  if (print) cout << "\n===== Shell sort Ascending =====" << endl;
  for (int gap = size / 2; gap > 0; gap /= 2) {
    if (print) {
      cout << "Jarak " << gap << " : " << endl;
      cetakLarik(dataset, size);
      cout << endl;
    }
    for (int i = gap; i < size; i++) {
      int j;
      string temp = dataset[i];
      for (j = i; j >= gap; j -= gap) {
        if (toLowerCase(dataset[j - gap]) > toLowerCase(temp)) {
          dataset[j] = dataset[j - gap];
        } else {
          break;
        }
      }
      dataset[j] = temp;
      if (print) {
        cetakLarik(dataset, size);
        cout << endl;
      }
    }
    if (print) cout << endl;
  }
  if (print) {
    cout << "Akhir: ";
    cetakLarik(dataset, size);
    cout << endl;
  }
}

// Shell sort Descending
void shellSortD(larik dataset, int size) {
  cout << "\n===== Shell sort Descending =====" << endl;
  for (int gap = size / 2; gap > 0; gap /= 2) {
    cout << "Jarak " << gap << " : " << endl;
    for (int i = gap; i < size; i++) {
      int j;
      string temp = dataset[i];
      cetakLarik(dataset, size);
      cout << endl;
      for (j = i; j >= gap; j -= gap) {
        if (toLowerCase(dataset[j - gap]) < toLowerCase(temp)) {
          dataset[j] = dataset[j - gap];
        } else {
          break;
        }
      }
      dataset[j] = temp;
    }
    cout << endl;
  }
  cout << "Akhir: ";
  cetakLarik(dataset, size);
  cout << endl;
}

// Linear search
void linearSearch(larik dataset, int size, string target) {
  int pos = -1;
  bool isEqual;
  for (int i = 0; i < size; i++) {
    if (toLowerCase(dataset[i]).find(toLowerCase(target)) != string::npos) {
      pos = i;
      break;
    }
  }
  if (pos == -1) {
    cout << "\nData tidak ditemukan";
  } else {
    cout << "\nData " << target << " ditemukan di posisi ke-" << pos + 1;
  }
}

// Binary search
void binarySearch(larik dataset, int size, string target) {
  if (!isSorted(dataset, size)) {
    shellSortA(dataset, size, false);
  }

  bool isEqual, compare;
  int left = 0, right = size - 1;
  int pos = -1;
  string d, t = toLowerCase(target);
  while (left <= right) {
    int mid = (left + right) / 2;
    d = toLowerCase(dataset[mid]);

    if (d.find(t) != string::npos) {
      pos = mid;
      break;
    }

    if (d < t) left = mid + 1;
    else right = mid - 1;
  }

  if (pos == -1) {
    cout << "\nData tidak ditemukan";
  } else {
    cout << "\nData terurut (ascending): "; cetakLarik(dataset, size);
    cout << "\nData " << target << " ditemukan di posisi ke-" << pos + 1;
  }
}

void pilihOpsi(int &pilihan) {
  cout << "(1) Bubble sort cara 1 Ascending" << endl;
  cout << "(2) Bubble sort cara 1 Descending" << endl;
  cout << "(3) Bubble sort cara 2 Ascending" << endl;
  cout << "(4) Bubble sort cara 2 Descending" << endl;
  cout << "(5) Bubble sort cara 3 Ascending" << endl;
  cout << "(6) Bubble sort cara 3 Descending" << endl;
  cout << "(7) Selection sort Ascending" << endl;
  cout << "(8) Selection sort Descending" << endl;
  cout << "(9) Insertion sort Ascending" << endl;
  cout << "(10) Insertion sort Descending" << endl;
  cout << "(11) Shell sort Ascending" << endl;
  cout << "(12) Shell sort Descending" << endl;
  cout << "(13) Linear search" << endl;
  cout << "(14) Binary search" << endl;

  cout << "Pilih mau yang mana ? ";
  cin >> pilihan;
}

void pilihTipeData(int &type) {
  cout << "1. Bilangan bulat (int); 2. String (string): "; cin >> type;
}

// Function overloading
void inputData(larik &dataset, int &size) {
  cout << "Masukkan ukuran array : ";
  cin >> size; cin.ignore();

  cout << "Masukkan elemen-elemen array (pisahkan dengan newline) :\n";
  for (int i = 0; i < size; i++) {
    getline(cin, dataset[i]);
  }
}

void panggilFungsi(larik dataset, int size, int pilihan, string target) {
  switch (pilihan) {
    case 1: bubbleSortCara1A(dataset, size); break;
    case 2: bubbleSortCara1D(dataset, size); break;
    case 3: bubbleSortCara2A(dataset, size); break;
    case 4: bubbleSortCara2D(dataset, size); break;
    case 5: bubbleSortCara3A(dataset, size); break;
    case 6: bubbleSortCara3D(dataset, size); break;
    case 7: selectionSortA(dataset, size); break;
    case 8: selectionSortD(dataset, size); break;
    case 9: insertionSortA(dataset, size); break;
    case 10: insertionSortD(dataset, size); break;
    case 11: shellSortA(dataset, size); break;
    case 12: shellSortD(dataset, size); break;
    case 13: linearSearch(dataset, size, target); break;
    case 14: binarySearch(dataset, size, target); break;
  }
}

int main() {
  int pilihan, size;
  string target;
  larik dataset;

  pilihOpsi(pilihan);
  if (pilihan < 1 || pilihan > 14) {
    cout << "Input tidak valid"; return 0;
  }

  inputData(dataset, size);

  if (pilihan == 13 || pilihan == 14) {
    cout << "Data yang akan dicari: ";
    getline(cin, target);
  }

  panggilFungsi(dataset, size, pilihan, target);

  return 0;
}