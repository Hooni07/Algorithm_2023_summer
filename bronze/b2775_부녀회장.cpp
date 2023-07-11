#include <iostream>
#include <vector>

using namespace std;

int main() {
  int test, k, n, result;

  cin >> test;
  for (int i=0; i < test; i++) {
    cin >> k;
    cin >> n;
    vector<int> first;
    for (int a=1; a <= n; a++){
      first.push_back(a);
    }
    for (int j=0; j < k; j++) {
      vector<int> temp;
      int sum = 0;
      for (int b=0; b < first.size(); b++){
        sum = sum + first.at(b);
        temp.push_back(sum);
        result = sum;
      }
      if (k != 1){
        first = temp;
      }
    }
    cout << result << endl;
  }
}
