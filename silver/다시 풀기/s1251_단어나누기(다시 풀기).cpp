#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
  string str;
  string result = "";
  int count = 0;

  cin >> str;
  vector<int> small_idx;

  for(int i=1; i < str.size() - 1; i++){
    if (small_idx.size() == 2){ break; }

    if (str[i-1] > str[i]) {
      small_idx.push_back(i);
      count++;
    }
  }


  if (small_idx.size() == 0) {
    result = result + str.substr(0, 2);
    str.erase(0, 2);
    reverse(str.begin(), str.end());
    result = result + str;
  }
  else if (small_idx.size() == 1) {
    reverse(str.begin(), str.begin() + small_idx.at(0) + 1);
    result = result + str.substr(0, small_idx.at(0) + 1);
    str.erase(0, small_idx.at(0) + 1);
    result = result + str.at(0);
    str.erase(0, 1);
    reverse(str.begin(), str.end());
    result = result + str;
  }
  else {
    reverse(str.begin(), str.begin() + small_idx.at(0) + 1);
    result = result + str.substr(0, small_idx.at(0) + 1);
    str.erase(0, small_idx.at(0) + 1);
    reverse(str.begin(), str.begin() + small_idx.at(1) - small_idx.at(0));
    result = result + str.substr(0, small_idx.at(1) - small_idx.at(0));
    str.erase(0, small_idx.at(1) - small_idx.at(0));
    reverse(str.begin(), str.end());
    result = result + str;
  }
  cout << result << endl;

  return 0;
}