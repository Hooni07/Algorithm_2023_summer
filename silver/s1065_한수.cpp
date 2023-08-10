#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int num;
  cin >> num;

  string num_str = to_string(num);
  int count = 0;

  for (int i = 1; i <= num; i++){
    if (to_string(i).length() == 1 || to_string(i).length() == 2){
      count++;
    }
    else if (to_string(i).length() == 3){
      int a = i / 100;
      int b = (i - (a * 100)) / 10;
      int c = i % 10;
      int a_b = a - b;
      int b_c = b - c;
      if (a_b == b_c) { count++; }
    }
  }

  cout << count << endl;
}