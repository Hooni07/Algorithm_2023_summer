#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
  vector<int> answer;
  vector<pair<string, int>> matching;
  for(int i=0; i < name.size(); i++){
    matching.push_back(make_pair(name[i], yearning[i]));
  }

  for(int i=0; i < photo.size(); i++) {
    int point = 0;
    for(int j=0; j < photo[i].size(); j++) {
      for(int k=0; k < matching.size(); k++) {
        if (photo[i][j] == matching[k].first) {
          point = point + matching[k].second;
        }
      }
    }
    answer.push_back(point);
  }
  return answer;
}