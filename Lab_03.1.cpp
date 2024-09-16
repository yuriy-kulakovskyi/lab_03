// Lab_03.1.cpp
// Кулаковський Юрій
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9


#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x;
  double y;
  double A;
  double B;

  cout << "x = "; cin >> x;

  A = 2 * pow(abs(x), 3);

  // розгалуження в скороченій формі
  if (x <= -0.1)
    B = 5 * cos(18 * x);
  if (x > -0.1 && x < 1.2)
    B = atan(x + 2) / 5;
  if (x >= 1.2)
      B = 1 / tan(x) + 18;

  y = A - B;

  cout << endl;

  cout << "1) y = " << y << endl;

  // розгалуження в повній формі
  if (x <= -0.1)
    B = 5 * cos(18 * x);
  else
    if (x > -0.1 && x < 1.2)
      B = atan(x + 2) / 5;
    else
      B = 1 / tan(x) + 18;

  cout << "2) y = " << y << endl;

  cin.get();

  return 0;
}
