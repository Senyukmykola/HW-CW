#include <iostream>

using namespace std;
double polynomial1(double x, double y);
double polynomial2(double x, double y);

int main(){
  system("chcp 1251");
  double func1;
  int x;
  int y;
  cout << "Введіть значення х = ";
  cin >> x;
  cout << endl;
  cout << "Введіть значення y = ";
  cin >> y;
  cout << endl;
  func1 = polynomial1(x, y);
  cout << "Значення функції А:" << func1<<endl;
  double func2 = polynomial2(x, y);
  cout << "Значення функції Б:" << func2<<endl;
}

double polynomial1(double x, double y) {
  double result;
  result = x * x * x + 3 * x*x * y + 3 *x* y * y + y * y * y;
  return result;
}

double polynomial2(double x, double y) {
  double result = x * x * y * y*(1 + x * y + x * x * y * y);
  return result;
}