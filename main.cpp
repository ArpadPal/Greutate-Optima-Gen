#include <iostream>
using namespace std;

int main() {
double g;
  int h, v;
  cout << "inaltimea (cm) = "; cin >> h;
  cout << "varsta (ani) = "; cin >> v; 
  g = 50 + 3./4. * (h-150) + 1./4. * (v-20);
  cout << "Greutatea ideala: barbat: " << g << "kg, femeie: " << g * 0.9 << "kg" << endl;
}