#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
  int answer = -1;
  int case_num = 0;

  for (int i=0; i < nums.size()-2; i++){
    for (int j=i+1; j < nums.size()-1; j++){
      for (int k=j+1; k < nums.size(); k++){
        int temp_num = nums[i] + nums[j] + nums[k];
        int error = 0;
        for (int a=2; a < temp_num; a++){
          if (temp_num % a == 0) {
            error = 1;
            break;
          }
        }
        if (error == 0) {
          if (i != j != k && i != j && i != k && j != k){
            case_num++;
          }
        }
      }
    }
  }
  answer = case_num;
  return answer;
}

int main(){
  int n;
  vector<int> words1 = {1,2,3,4};
  vector<int> words2 = {1,2,7,6,4};

  cout << solution(words1) << endl;
  cout << solution(words2) << endl;

}