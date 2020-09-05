#include <iostream>
using namespace std;

int main() {
double g;
  int h, v;
  char gen;
  cout << "inaltimea (cm) = "; cin >> h;
  cout << "varsta (ani) = "; cin >> v;
  cout << "gen (b, f) = "; cin >> gen;
  g = 50 + 3./4. * (h-150) + 1./4. * (v-20);
  if (gen == 'b')
  cout << "Greutatea ideala: barbat: " << g << "kg";
  else
  cout << "Greutatea ideala femeie " << g * 0.9 << "kg" << endl;
}