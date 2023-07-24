#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> input_day() {
  int year, month, day;
  vector<int> days;
  cin >> year >> month >> day;
  days.push_back(year);
  days.push_back(month);
  days.push_back(day);
  return days;
}

int main() {
  vector<int> today;
  vector<int> d_day;
  int count = 0;

  today = input_day();
  d_day = input_day();

  while (true){
    // 종료 조건
    if (today.at(0) == d_day.at(0)){
      if (today.at(1) == d_day.at(1)){
        if (today.at(2) == d_day.at(2)){
            break;
        }
      }
    }

    // 1달이 31일인 경우(1, 3, 5, 7, 8, 10, 12)
    if (today.at(1) == 1 || today.at(1) == 3 || today.at(1) == 5 || today.at(1) == 7
        || today.at(1) == 8 ||today.at(1) == 10 || today.at(1) == 12){
      // 12월인 경우
      if (today.at(1) >= 12){
        if (today.at(2) >= 31){
          today.at(0)++;
          today.at(1) = 1;
          today.at(2) = 1;
        }
        else {
          today.at(2)++;
        }
      }
      // 1, 3, 5, 7, 8, 10월인 경우
      else {
        if (today.at(2) >= 31){
          today.at(1)++;
          today.at(2) = 1;
        }
        else {
          today.at(2)++;
        }
      }
      count++;
    }
    // 2월인 경우
    else if (today.at(1) == 2){
      // 윤년인 경우(우선)
      if (today.at(0) % 4 == 0){
        if (today.at(0) % 100 == 0) {
          // 400으로 나누어 떨어지는 경우 -> 윤년
          if (today.at(0) % 400 == 0) {
            if (today.at(2) >= 29){
              today.at(1)++;
              today.at(2) = 1;
            }
            else {
              today.at(2)++;
            }
          }
          // 100으로 나누어 떨어지는 경우 -> 평년
          else{
            if (today.at(2) >= 28){
              today.at(1)++;
              today.at(2) = 1;
            }
            else {
              today.at(2)++;
            }
          }
        }
        // 위 2개의 조건 제외 4로 나누어 떨어지는 경우 -> 윤년
        else {
          if (today.at(2) >= 29){
            today.at(1)++;
            today.at(2) = 1;
          }
          else {
            today.at(2)++;
          }
        }
      }
      // 평년인 경우
      else {
        if (today.at(2) >= 28){
          today.at(1)++;
          today.at(2) = 1;
        }
        else {
          today.at(2)++;
        }
      }
      count++;
    }
    // 4, 6, 9, 11월인 경우
    else {
      if (today.at(2) >= 30){
        today.at(1)++;
        today.at(2) = 1;
      }
      else {
        today.at(2)++;
      }
      count++;
    }
  }

  if (count < 365243) {
    cout << "D-" << count << endl;
  }
  else {
    cout << "gg" << endl;
  }
}