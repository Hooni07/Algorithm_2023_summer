#include <iostream>

using namespace std;


long long int fact(int num){
  if (num >= 1){
    return num * fact(num-1);
  }
  else{
    return 1;
  }
}

long long int comb(int a, int b){
  long long int result = 1;
  int temp = 1;
  for (int i=a; i > a - b; i--){
    result = result * i / temp;
    if (temp < b) { temp++; }
  }
  return result;
}

int main() {
  int test;
  int west, east;

  cin >> test;
  for (int i=0; i < test; i++){
    long long int count = 0;
    cin >> west >> east;

    if (west == east) {
      count++;
    }
    else if (west == 1){
      count = count + east;
    }
    else {
      count = count + comb(east, west);
    }
    cout << count << endl;
  }


}
