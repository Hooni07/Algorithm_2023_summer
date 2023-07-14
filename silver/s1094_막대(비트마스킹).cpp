#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  int count = 0, result = 0;
  int base = 64;
  cin >> x;
  vector<int> stick;
  while(true){
    stick.push_back(base);
    base = base / 2;
    if (base == 1) {
      stick.push_back(base);
      break;
    }
  }

  int i = 0;
  while (result <= x){
    if (x == 0) { break; }
    result = result + stick[i];
    if (result > x){
      result = result - stick[i];
      i++;
    }
    else if (result == x) {
      count++;
      break;
    }
    else {
      count++;
      i++;
    }
  }
  cout << count;
}
// 1 2 4 8 16 32 64