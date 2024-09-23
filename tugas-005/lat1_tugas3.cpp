#include <iostream>
using namespace std;

float average(float n1, float n2, float n3) {
  return (n1 + n2 + n3) / 3;
}

char check_grade(float avg) {
  char grade;
  if (avg >= 80 && avg <= 100) grade = 'A';
  else if (avg >= 68 && avg < 80) grade = 'B';
  else if (avg >= 55 && avg < 68) grade = 'C';
  else if (avg >= 45 && avg < 55) grade = 'D';
  else grade = 'E';

  return grade;
}

void message(float avg, char grade) {
  cout << "Nilai rata-rata: " << avg << '\n';
  cout << "Nilai mutu: " << grade << '\n';
  cout << "Keterangan: " << (avg >= 68 ? "Lulus" : "Gagal");
}

int main() {
  float n1, n2, n3, avg;
  cin >> n1 >> n2 >> n3;

  avg = average(n1, n2, n3);
  message(avg, check_grade(avg));

  return 0;
}