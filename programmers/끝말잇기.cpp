#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
  vector<int> answer;
  vector<string> temp_words = words;

  int p = 1;
  int count = 1;
  int case1_error = 0;
  int case2_error = 0;
  for (int i=0; i < words.size(); i++){
    if (i > 0) {
      // case1 : 끝말잇기중 이전 글자의 끝과 일치하지 않는 경우
      if (words[i][0] != words[i-1][words[i-1].size()-1]){
        case1_error = 1;
        break;
      }
      // case2 : 현재까지 나온 글자 중, 이미 나온 글자가 있는 경우
      for(int j=0; j < i; j++){
        if (words[i] == words[j]) {
          case2_error = 1;
          break;
        }
      }
      if (case2_error == 1) { break; }
    }
    if (p == n){
      p = 1;
      count++;
    }
    else {
      p++;
    }
  }

  if (case1_error == 0 && case2_error == 0) {
    p = 0;
    count = 0;
  }

  answer.push_back(p);
  answer.push_back(count);
  return answer;
}

int main(){
  int n;
  vector<string> words1 = {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"};
  vector<string> words2 = {"hello", "observe", "effect", "take", "either", "recognize",
                           "encourage", "ensure", "establish", "hang", "gather", "refer",
                           "reference", "estimate", "executive"};
  vector<string> words3 = {"hello", "one", "even", "never", "now", "world", "draw"};

  cout << solution(3, words1)[0] << " " << solution(3, words1)[1] << endl;
  cout << solution(5, words2)[0] << " " << solution(5, words2)[1] << endl;
  cout << solution(2, words3)[0] << " " << solution(2, words3)[1] << endl;
}