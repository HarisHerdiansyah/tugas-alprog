#include <iostream>
using namespace std;

void input_gate(int &user_pos, int &length_of_employment, int &age) {
  bool is_user_pos_valid = false;

  cout << "Masukkan jabatan sesuai kode (0: STAFF, 1: NON_STAFF): ";
  while (!is_user_pos_valid) {
    cin >> user_pos;

    if (user_pos == 0 || user_pos == 1) {
      is_user_pos_valid = true;
    } else {
      cout << "Kode salah! Masukkan ulang kode (0: STAFF, 1: NON_STAFF): ";
    }
  }

  cout << "Lama bekerja hingga sekarang: ";
  cin >> length_of_employment;

  cout << "Umur: ";
  cin >> age;
}

void calc_staff_bonus(int &length_of_employment, int &age, int &bonus) {
  if (length_of_employment >= 5 && age >= 50) {
    bonus = 10'000'000;
  } else {
    if (length_of_employment >= 5 && age < 50) {
      bonus = 3'000'000;
    } else {
      bonus = 5'000'000;
    }
  }
}

void calc_non_staff_bonus(int &length_of_employment, int &age, int &bonus) {
  if (length_of_employment > 5 && age > 50) {
    bonus = 4'000'000;
  } else {
    if (age < 50) {
      bonus = 2'500'000;
    }
  }
}

int main() {
  int user_pos, length_of_employment, age, bonus;
  input_gate(user_pos, length_of_employment, age);

  if (user_pos == 0) {
    calc_staff_bonus(length_of_employment, age, bonus);
  } else if (user_pos == 1) {
    calc_non_staff_bonus(length_of_employment, age, bonus);
  }

  cout << "Bonus gaji anda: Rp" << bonus << endl;
  return 0;
}