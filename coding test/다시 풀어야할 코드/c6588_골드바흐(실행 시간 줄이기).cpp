#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num){
  for (int i=2; i < num; i++){
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  while (cin >> n) {
    if (n == 0){
      break;
    }
    int check = 0;
    int a = 3;
    int b = n - a;
    while (a <= b) {
      if (isPrime(a) && isPrime(b)) {
        check = 1;
        break;
      }
      else {
        a = a + 2;
        b = n - a;
      }
    }
    if (check == 1){
      cout << n << " = " << a << " + " << b << endl;
    }
    else {
      cout << "Goldbach's conjecture is wrong." << endl;
    }
  }
}