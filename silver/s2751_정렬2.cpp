#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
  return a < b;
}

int main(){
  long long num;
  vector<long long> num_vec;

  cin >> num;
  for(long long i=0; i < num; i++){
    long long temp;
    cin >> temp;
    num_vec.push_back(temp);
  }

  sort(num_vec.begin(), num_vec.end(), compare);

  // execute time : '\n'이 더 우수
  for(long long i=0; i < num_vec.size(); i++){
    cout << num_vec.at(i) << '\n';
  }
}