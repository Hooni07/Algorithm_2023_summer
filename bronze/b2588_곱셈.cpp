#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  int sub1, sub2, sub3;
  cin >> num1 >> num2;

  sub1 = num2 / 100;
  sub2 = (num2 - sub1 * 100) / 10;
  sub3 = num2 - sub1 * 100 - sub2 * 10;
  cout << num1 * sub3 << endl;
  cout << num1 * sub2 << endl;
  cout << num1 * sub1 << endl;
  cout << num1 * num2 << endl;
}
