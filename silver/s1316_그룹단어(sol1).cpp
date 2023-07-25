#include <iostream>

using namespace std;

int main(){
  int num;

  cin >> num;

  int count = 0;
  for (int i=0; i < num; i++){
    string word;
    cin >> word;
    int temp_cnt = 0;
    int same = 0;
    int no_seq = 0;
    for (int j=0; j < word.size(); j++){
      if (j == 0) {
        temp_cnt++;
      }
      else {
        for (int k=0; k < j; k++) {
          if (word[k] == word[j]) {
            same = 1;
            if (j - k == 1) { temp_cnt++; }
            else {
              for(int a = k+1; a < j; a++){
                if (word[a] != word[j]) {
                  no_seq = 1;
                  break;
                }
              }
              if (no_seq == 1) {
                break;
              }
            }
          }
          else { same = 0; }
        }
        if (same == 0){ temp_cnt++; }
      }
      if (word.size() == temp_cnt){ count++; }
    }

  }

  cout << count << endl;
}