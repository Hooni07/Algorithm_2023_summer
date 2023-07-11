#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int dia, height, width;
  cin >> dia >> height >> width;

  double x = sqrt(pow(dia, 2) / (pow(height, 2) + pow(width, 2)));

  int real_height = int(x * height);
  int real_width = int(x * width);
  cout << real_height << " " << real_width;
}
