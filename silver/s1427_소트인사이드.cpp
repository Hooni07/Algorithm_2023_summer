#include <iostream>

using namespace std;

int main(){
  string num;

  cin >> num;
  for (int i=0; i < num.size(); i++) {
    for (int j=i+1; j < num.size(); j++) {
      if (num[i] <= num[j]){
        char temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  cout << num << endl;

}