#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int count = 0;

  getline(cin, str);
  while(str != "#"){
    for (int i = 0; i < str.length(); i++){
      if (str[i] == 'a' || str[i] == 'A') { count++; }
      else if (str[i] == 'e' || str[i] == 'E') { count++; }
      else if (str[i] == 'i' || str[i] == 'I') { count++; }
      else if (str[i] == 'o' || str[i] == 'O') { count++; }
      else if (str[i] == 'u' || str[i] == 'U') { count++; }
    }
    cout << count << endl;
    count = 0;
    getline(cin, str);
  }

  return 0;
}
