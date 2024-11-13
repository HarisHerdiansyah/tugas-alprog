#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 1;
  int *p = &n;
  int *q;
  int *r;
  int *s;

  // BLOK 1
  cout << "n: " << n << ";\t&n: " << &n << endl;
  cout << "p: " << p << ";\t*p: " << *p << endl;
  cout << "&p: " << &p << ";\t&(*p): " << &(*p) << endl << endl;

  // BLOK 2
  q = new int; // alokasi
  *q = 2;
  cout << "q: " << q << ";\t*q: " << *q << endl;
  cout << "&q: " << &q << ";\t&(*q): " << &(*q) << endl << endl;
  delete(q);

  // BLOK 3
  r = new int;
  *r = 3;
  cout << "r: " << r << ";\t*r: " << *r << endl;
  cout << "&r: " << &r << ";\t&(*r): " << &(*r) << endl << endl;

  // BLOK 4
  s = q;
  *s = 4;
  cout << "q: " << q << ";\t*q: " << *q << endl;
  cout << "s: " << s << ";\t*s: " << *s << endl;
  cout << "&q: " << &q << ";\t&s: " << &s << endl << endl;
  return 0;
}