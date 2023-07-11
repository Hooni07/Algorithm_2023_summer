#include <iostream>
#include <vector>

using namespace std;

int main() {
  long long int n;
  long long int result = 0;
  cin >> n;

  vector<long long int> f;
  int i = 0;
  while (i <= n){
    if (i < 2){
      f.push_back(i);
    }
    else {
      result = f.at(i-1) + f.at(i-2);
      f.push_back(result);
    }
    i++;
  }
  cout << f.back();

}
