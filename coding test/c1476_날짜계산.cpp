#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int earth, sun, moon;
  cin >> earth >> sun >> moon;

  int year = 1;
  int a = 1, b = 1, c = 1;
  while (moon >= 1) {
    if (a == earth && b == sun && c == moon){
      break;
    }

    a++;
    b++;
    c++;
    year++;

    if (a > 15) {
      a = 1;
    }
    if (b > 28) {
      b = 1;
    }
    if (c > 19) {
      c = 1;
    }
  }

  cout << year << endl;
}