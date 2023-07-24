#include <iostream>

using namespace std;

int main(){
  int a, b, n;
  int result = 0;

  cin >> a >> b >> n;

  int count = 0;
  int tmp_mod = a % b;
  while(count < n){
    int n_temp = tmp_mod * 10;
    result = n_temp / b;
    tmp_mod = n_temp % b;
    count++;
  }
  cout << result << endl;
}