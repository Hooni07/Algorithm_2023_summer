#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
  int num;
  cin >> num;
  int left = 1, right = 1;

  int i = 0;
  while (i < num) {
    if (i == 0) {
      i++;
    }
    else {
      if ((left + right) % 2 == 0){
        right++;
      }
      else {
        left++;
      }
      i++;
      if (i == num) { break ; }
      if ((left + right) % 2 == 1){
        while (right > 1) {
          left++;
          right--;
          i++;
          if (i == num) { break; }
        }
      }
      else {
        while (left > 1) {
          left--;
          right++;
          i++;
          if (i == num) { break; }
        }
      }
      if (i == num) { break; }
    }
  }
  cout << left << "/" << right;

}
