#include <iostream>

using namespace std;

int main() {
  int num = 0;
  cin >> num;
  int star_max = 2 * num - 1;
  int mid = star_max / 2;

  for (int i=0; i < num; i++){
    for (int j=0; j <= mid + i; j++){
      if (j == mid) { cout << "*"; }
      else if (j >= mid - i && j <= mid + i) { cout << "*"; }
      else { cout << " ";}
    }
    if (i != num - 1) { cout << endl; }
  }

  return 0;
}
