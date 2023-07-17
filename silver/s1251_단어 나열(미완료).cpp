#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
  string str;
  string result = "";
  cin >> str;

  char small_char = str[0];
  int small_idx = 0;
  int check = 1;
  while (!(str.empty())){
    if (check == 1){
      if (str.size() > 2){
        for (int i=0; i < str.length() - 2; i++){
          if (str[i] <= small_char){
            small_char = str[i];
            small_idx = i;
            break;
          }
        }
        for (int j=small_idx; j >= 0; j--) {
          result = result + str[j];
        }
        cout << result << endl;
        str.erase(0, small_idx);
      }
      check++;
    }
    else if (check == 2){
      if (str.size() > 1){
        for (int i=0; i < str.length() - 1; i++){
          if (str[i] <= small_char){
            small_char = str[i];
            small_idx = i;
            break;
          }
        }
        for (int j=small_idx; j >= 0; j--) {
          result = result + str[j];
        }
        str.erase(0, small_idx);
      }

      else {
        result = result + str;
        str.erase(0, str.length());
      }
      check++;
    }
    else {
      for (int j=str.length()-1; j >= 0; j--) {
        result = result + str[j];
      }
      str.erase(0, str.length()-1);
    }
  }
  cout << result << endl;
}
