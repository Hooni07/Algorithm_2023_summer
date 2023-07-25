#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
  return a < b;
}

int main(){
  int man;
  vector<int> height;

  for (int i=0; i < 9; i++){
    cin >> man;
    height.push_back(man);
  }

  vector<int> result;

  while (true){
    int sum = 0;
    random_shuffle(height.begin(), height.end());
    for (int i=0; i < 7; i++) {
      sum = sum + height.at(i);
    }
    if (sum == 100){
      for (int i=0; i < 7; i++){
        result.push_back(height.at(i));
      }
      break;
    }
  }

  sort(result.begin(), result.end(), compare);

  for (int i=0; i < result.size(); i++){
    cout << result.at(i) << endl;
  }

}