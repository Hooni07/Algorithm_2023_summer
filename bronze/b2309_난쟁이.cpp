#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int h = 0;
  vector<int> first;
  for (int i=0; i < 9; i++){
    cin >> h;
    first.push_back(h);
  }

  int ex1 = 0;
  int ex2 = 1;
  int sum = 0;
  while (sum != 100){
    sum = 0;
    vector<int> temp;
    for (int i=0; i < first.size(); i++){
      if(i == ex1) { continue; }
      else if(i == ex2) { continue; }
      else {
        temp.push_back(first.at(i));
        sum = sum + first.at(i);
      }
    }
    if (sum == 100){
      sort(temp.begin(), temp.end());
      for (int i=0; i < temp.size(); i++){
        cout << temp.at(i) << endl;
      }
      break;
    }
    if (ex2 == 8){
      if (ex1 <= 6){
        ex1++;
        ex2 = ex1;
      }
    }
    ex2++;
  }

}
