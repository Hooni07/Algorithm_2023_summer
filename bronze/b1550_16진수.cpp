#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  string num;
  int pos = 0;
  int result = 0;
  cin >> num;
  reverse(num.begin(), num.end());
  while(pos < num.size()){
    if (num[pos] >= 'A' && num[pos] <= 'F'){
      result = result + (int(num[pos]) - 55) * pow(16, pos);
    }
    if (num[pos] >= '0' && num[pos] <= '9'){
      result = result + (int(num[pos]) - 48) * pow(16, pos);
    }
    pos++;
  }
  cout << result;
}
