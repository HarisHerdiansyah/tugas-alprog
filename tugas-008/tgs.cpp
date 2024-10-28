/*
    Kelompok 10
    Nama anggota kelompok : Aulia Ramdani Nur / 140810240002
                            Risyam Muhammad Iesqillah / 140810240032
                            Haris Herdiansyah / 140810240074
    Deskripsi program : Program sorting Ascending, Descending, bubble sort, selection sort, insertion sort, dan shell sort.
*/

#include <iostream>
using namespace std;

typedef int larik[256];

void tukarNilai(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void cetakLarik(larik dataset, int size) {
  for (int i = 0; i < size; i++) {
    cout << dataset[i] << " ";
  }
}

// Bubble sort cara 1 Ascending
void bubbleSortCara1A(larik dataset, int size) {
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
void bubbleSortCara1D(larik dataset, int size) {
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
void bubbleSortCara2A(larik dataset, int size) {
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
void bubbleSortCara2D(larik dataset, int size) {
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
void bubbleSortCara3A(larik dataset, int size) {
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
void bubbleSortCara3D(larik dataset, int size) {
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
void selectionSortA(larik dataset, int size) {
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
void selectionSortD(larik dataset, int size) {
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
void insertionSortA(larik dataset, int size) {
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
void insertionSortD(larik dataset, int size) {
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
void shellSortA(larik dataset, int size) {
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
void shellSortD(larik dataset, int size) {
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

  cout << "Pilih mau yang mana ? ";
  cin >> pilihan;
}

void inputData() {}

int main() {
  int pilihan, size;
  larik dataset;

  pilihOpsi(pilihan);
  if (pilihan > 12 || pilihan < 1) {
    cout << "Data tidak valid!" << endl;
    return 0;
  }

  cout << "Masukkan ukuran array : ";
  cin >> size;

  cout << "Masukkan elemen-elemen array : " << endl;
  for (int i = 0; i < size; i++) {
    cin >> dataset[i];
  }

  switch (pilihan) {
    case 1:
      bubbleSortCara1A(dataset, size);
      break;
    case 2:
      bubbleSortCara1D(dataset, size);
      break;
    case 3:
      bubbleSortCara2A(dataset, size);
      break;
    case 4:
      bubbleSortCara2D(dataset, size);
      break;
    case 5:
      bubbleSortCara3A(dataset, size);
      break;
    case 6:
      bubbleSortCara3D(dataset, size);
      break;
    case 7:
      selectionSortA(dataset, size);
      break;
    case 8:
      selectionSortD(dataset, size);
      break;
    case 9:
      insertionSortA(dataset, size);
      break;
    case 10:
      insertionSortD(dataset, size);
      break;
    case 11:
      shellSortA(dataset, size);
      break;
    case 12:
      shellSortD(dataset, size);
      break;
  }

  return 0;
}