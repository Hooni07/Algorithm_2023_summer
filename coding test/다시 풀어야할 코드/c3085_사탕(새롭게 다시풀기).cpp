#include <iostream>
#include <algorithm>

using namespace std;


char candy[51][51];
int max_candy = 0;

void find_best(int n){
  for (int i=0; i < n; i++){
    int count = 1;
    for (int j=0; j < n; j++){
      if (candy[i][j] == candy[i][j+1]){
        count++;
      }
      else {
        if (max_candy < count){
          max_candy = count;
        }
        count = 1;
      }
    }
  }

  for (int i=0; i < n; i++){
    int count = 1;
    for (int j=0; j < n; j++){
      if (candy[j][i] == candy[j+1][i]){
        count++;
      }
      else {
        if (max_candy < count){
          max_candy = count;
        }
        count = 1;
      }
    }
  }
}

int main(){
  int num;
  cin >> num;

  // 사탕의 색상 입력
  for (int i=0; i < num; i++){
    for (int j=0; j < num; j++){
      cin >> candy[i][j];
    }
  }

  for (int i=0; i < num; i++){
    for (int j=0; j < num - 1; j++){
      swap(candy[i][j], candy[i][j+1]);
      find_best(num);
      swap(candy[i][j], candy[i][j+1]);
    }
  }

  for (int j=0; j < num; j++){
    for (int i=0; i < num-1; i++){
      swap(candy[i][j], candy[i+1][j]);
      find_best(num);
      swap(candy[i][j], candy[i+1][j]);
    }
  }

  cout << max_candy << endl;
}