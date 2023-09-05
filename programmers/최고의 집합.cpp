#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<int> solution(int n, int s) {
  vector<int> answer;

  if (s < n) { answer.push_back(-1); }
  else if (s == n) {
    for (int i=1; i <= n; i++){
      answer.push_back(1);
    }
  }
  else {
    int t1 = s / n;
    int t2 = s % n;

    for (int i=1; i <= n; i++){
      if (t2 == 0) {
        answer.push_back(t1);
      }
      else {
        if (i <= n - t2){
          answer.push_back(t1);
        }
        else {
          answer.push_back(t1+1);
        }
      }
    }
  }

  return answer;
}

int main(){
  cout << solution(2, 1)[0] << endl;
  cout << solution(2, 2)[0] << " " << solution(2, 2)[1] << endl;
  cout << solution(2, 9)[0] << " " << solution(2, 9)[1] << endl;
  cout << solution(3, 4)[0] << " " << solution(3, 4)[1] << solution(3, 4)[2] << endl;
  cout << solution(2, 8)[0] << " " << solution(2, 8)[1] << endl;

}