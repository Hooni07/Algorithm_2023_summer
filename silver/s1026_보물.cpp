#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b){
  return a > b;
}

int main(){
  int num = 0;
  cin >> num;

  int a[num], b[num];

  for(int i=0; i < num; i++){
    cin >> a[i];
  }
  for(int i=0; i < num; i++){
    cin >> b[i];
  }

  sort(a, a+num);
  sort(b, b+num, desc);

  int sum = 0;
  for (int i=0; i < num; i++){
    sum = sum + (a[i] * b[i]);
  }

  cout << sum << endl;

}