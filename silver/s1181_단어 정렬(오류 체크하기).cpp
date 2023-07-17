#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp_length(string s1, string s2) {
  return s1.size() < s2.size();
}

bool comp_dictionary(string s1, string s2) {
  return s1 < s2;
}

int main() {
  int n;
  vector<string> str_vec;
  string str;

  cin >> n;
  for (int i=0; i < n; i++){
    cin >> str;
    int same = 0;
    if (str_vec.size() == 0){
      str_vec.push_back(str);
    }
    else {
      // 동일한 단어가 있는 경우 출력 case에 제외
      for (int j=0; j < str_vec.size(); j++) {
        if (str_vec.at(j) == str){
          same = 1;
          break;
        }
      }
      if (same == 0){
        str_vec.push_back(str);
      }
    }
  }

  // 사전순으로 정렬
  sort(str_vec.begin(), str_vec.end(), comp_dictionary);
  // 문자열의 개수대로 정렬
  sort(str_vec.begin(), str_vec.end(), comp_length);


  for (int i=0; i < str_vec.size(); i++){
    cout << str_vec.at(i) << endl;
  }
}
