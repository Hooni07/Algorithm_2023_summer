#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp(string s1, string s2) {
  if (s1.length() == s2.length()){
    return s1 < s2;
  }
  else {
    return s1.length() < s2.length();
  }
}

string word[20000];

int main() {
  int N;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> word[i];
  }

  sort(word, word + N, comp);

  for (int i = 0; i < N; i++) {
    // 중복된 경우 한번만 출력
    if (word[i] == word[i - 1]) {
      continue;
    }
    cout << word[i] << "\n";
  }

  return 0;
}