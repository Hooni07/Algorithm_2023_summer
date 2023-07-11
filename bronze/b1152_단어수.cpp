#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int count = 0;

  getline(cin, str);
  for (int i=0; i < str.size(); i++){
    if (str[i] == ' '){
      if (i == 0) { continue; }
      else { count++; }
    }
    else if (i == str.size() - 1) {
      if (str[i] == ' ') { continue; }
      else { count++; }
    }
  }

  cout << count;
}
