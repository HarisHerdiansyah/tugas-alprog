/*
    Kelompok 10
    Nama anggota kelompok : Aulia Ramdani Nur / 140810240002
                            Risyam Muhammad Iesqillah / 140810240032
                            Haris Herdiansyah / 140810240074
    Deskripsi program : Program sorting Ascending, Descending, bubble sort, selection sort, insertion sort, dan shell sort.
*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
using Larik = T[256];

template <typename T>
void tukarNilai(T &x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}

template <typename T>
void cetakLarik(Larik<T> dataset, int size) {
  for (int i = 0; i < size; i++) {
    cout << dataset[i] << " ";
  }
}

template <typename T>
bool isSorted(Larik<T> dataset, int size) {
  // TODO masih perlu custom handling, kalo data terurut tapi descending, bakal tetap nge-return false
  for (int i = 0; i < size - 1; i++) {
    if (dataset[i] > dataset[i+1]) {
      return false;
    }
  }
  return true;
}

// Bubble sort cara 1 Ascending
template <typename T>
void bubbleSortCara1A(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 1 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = 0; j < size - i - 1; j++) {
      if (dataset[j] > dataset[j + 1]) {
        tukarNilai(dataset[j], dataset[j + 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 1 Descending
template <typename T>
void bubbleSortCara1D(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 1 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = 0; j < size - i - 1; j++) {
      if (dataset[j] < dataset[j + 1]) {
        tukarNilai(dataset[j], dataset[j + 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 2 Ascending
template <typename T>
void bubbleSortCara2A(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 2 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = size - 1; j >= i + 1; j--) {
      if (dataset[j] < dataset[j - 1]) {
        tukarNilai(dataset[j], dataset[j - 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 2 Decending
template <typename T>
void bubbleSortCara2D(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 2 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = size - 1; j >= i + 1; j--) {
      if (dataset[j] > dataset[j - 1]) {
        tukarNilai(dataset[j], dataset[j - 1]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 3 Ascending
template <typename T>
void bubbleSortCara3A(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 3 Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = i + 1; j < size; j++) {
      if (dataset[idx_min] > dataset[j]) {
        tukarNilai(dataset[idx_min], dataset[j]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Bubble sort cara 3 Descending
template <typename T>
void bubbleSortCara3D(Larik<T> dataset, int size) {
  cout << "===== Bubble sort cara 3 Descending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    cout << "Proses ke-" << i + 1 << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int j = i + 1; j < size; j++) {
      if (dataset[idx_min] < dataset[j]) {
        tukarNilai(dataset[idx_min], dataset[j]);
      }
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Selection sort Ascending
template <typename T>
void selectionSortA(Larik<T> dataset, int size) {
  cout << "===== Selection sort Ascending =====" << endl;
  for (int i = 0; i < size - 1; i++) {
    int idx_min = i;
    for (int j = i + 1; j < size; j++) {
      if (dataset[idx_min] > dataset[j]) {
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
template <typename T>
void selectionSortD(Larik<T> dataset, int size) {
  cout << "===== Selection sort Descending =====" << endl;
  for (int i = 0; i < size; i++) {
    int idx_max = i;
    for (int j = i + 1; j < size; j++) {
      if (dataset[idx_max] < dataset[j]) {
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
template <typename T>
void insertionSortA(Larik<T> dataset, int size) {
  cout << "===== Insertion sort Ascending =====" << endl;
  for (int i = 1; i < size; i++) {
    cout << "Proses ke-" << i << ": ";
    for (int j = i; j >= 1; j--) {
      if (dataset[j] < dataset[j - 1]) {
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
template <typename T>
void insertionSortD(Larik<T> dataset, int size) {
  cout << "===== Insertion sort Descending =====" << endl;
  for (int i = 1; i < size; i++) {
    cout << "Proses ke-" << i << ": ";
    for (int j = i; j >= 1; j--) {
      if (dataset[j] > dataset[j - 1]) {
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
template <typename T>
void shellSortA(Larik<T> dataset, int size) {
  cout << "===== Shell sort Ascending =====" << endl;
  for (int gap = size / 2; gap > 0; gap /= 2) {
    cout << "Jarak " << gap << " : " << endl;
    cetakLarik(dataset, size);
    cout << endl;
    for (int i = gap; i < size; i++) {
      int j, temp = dataset[i];
      for (j = i; j >= gap; j -= gap) {
        if (dataset[j - gap] > temp) {
          dataset[j] = dataset[j - gap];
        } else {
          break;
        }
      }
      dataset[j] = temp;
      cetakLarik(dataset, size);
      cout << endl;
    }
    cout << endl;
  }
}

// Shell sort Descending
template <typename T>
void shellSortD(Larik<T> dataset, int size) {
  cout << "===== Shell sort Descending =====" << endl;
  for (int gap = size / 2; gap > 0; gap /= 2) {
    cout << "Jarak " << gap << " : " << endl;
    for (int i = gap; i < size; i++) {
      int j, temp = dataset[i];
      cetakLarik(dataset, size);
      cout << endl;
      for (j = i; j >= gap; j -= gap) {
        if (dataset[j - gap] < temp) {
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
template <typename T>
void linearSearch(Larik<T> dataset, int size, int target) {
  int pos;
  for (int i = 0; i < size; i++) {
    if (dataset[i] == target) {
      pos = i;
      break;
    }
  }
  cout << "Data " << target << " ditemukan di posisi ke-" << pos + 1;
}

// Binary search
template <typename T>
void binarySearch(Larik<T> dataset, int size, int target) {
  if (!isSorted(dataset, size)) {
    shellSortA(dataset, size);
  }

  int left = 0, right = size - 1;
  int pos = -1;
  while (left <= right) {
    int mid = (left + right) / 2;

    if (dataset[mid] == target) {
      pos = mid;
      break;
    }

    if (dataset[mid] < target) left = mid + 1;
    else right = mid - 1;
  }

  if (pos == -1) {
    cout << "Data tidak ditemukan";
  } else {
    cout << "Data terurut (ascending): "; cetakLarik(dataset, size);
    cout << "Data " << target << " ditemukan di posisi ke-" << pos + 1;
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
  cin >> pilihan; cout << endl;
}

void pilihTipeData(int &type) {
  cout << "1. Bilangan bulat (int); 2. String (string)" << endl;
  cin >> type; cout << endl;
}

template <typename T>
void inputData(Larik<T> &dataset, int &size) {
  cout << "Masukkan ukuran array : ";
  cin >> size;

  cout << "Masukkan elemen-elemen array : " << endl;
  for (int i = 0; i < size; i++) {
    cin >> dataset[i];
  }
}

template <typename T>
void panggilFungsi(Larik<T> dataset, int size, int pilihan, int target) {
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
  int pilihan, size, type, target;
  Larik<int> data_integer;
  Larik<string> data_string;

  pilihOpsi(pilihan);
  if (pilihan >= 1 && pilihan <= 14) {
    if (pilihan == 13 || pilihan == 14) {
      cout << "Data yang akan dicari: "; cin >> target;
    }
  } else {
    cout << "Input tidak valid!"; return 0;
  }

  pilihTipeData(type);
  if (type == 1) {
    inputData(data_integer, size);
    panggilFungsi(data_integer, size, pilihan, target);
  } else if (type == 2) {
    inputData(data_string, size);
    panggilFungsi(data_string, size, pilihan, target);
  }
  else {
    cout << "Input tidak valid!"; return 0;
  }

  return 0;
}