#include <iostream>

using namespace std;

int main(){
  long long n;
  while(cin >> n){
    long long temp = 1;
    long long count = 1;
    while(true){
      temp = temp % n;
      if(temp == 0){
        break;
      }
      temp = (temp * 10) % n + (1 % n);
      count++;
    }
    cout << count << '\n';
  }
}