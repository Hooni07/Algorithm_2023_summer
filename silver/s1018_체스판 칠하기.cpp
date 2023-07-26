#include <iostream>

using namespace std;

int min_change = 65;

void find_best(char color[][51], int n, int m){
  for (int a=0; a <= n - 8; a++) {
    for (int b=0; b <= m - 8; b++) {
      int change = 0;
      // 왼쪽 위 시작 지점이 흰색인 경우
      if (color[a][b] == 'W') {
        for (int i=0; i < 8; i++) {
          for (int j=0; j < 8; j++) {
            // 대각선에 위치해 있거나 한칸 떨어져 있는 경우
            if ((i + j) % 2 == 0) {
              if (color[a+i][b+j] == 'B') {
                change++;
              }
            }
              // 이웃해 있는 경우
            else {
              if (color[a+i][b+j] == 'W') {
                change++;
              }
            }
          }
        }
      }
        // 왼쪽 위 시작 지점이 검은색인 경우
      else if (color[a][b] == 'B') {
        for (int i=0; i < 8; i++) {
          for (int j=0; j < 8; j++) {
            // 대각선에 위치해 있거나 한칸 떨어져 있는 경우
            if ((i + j) % 2 == 0) {
              if (color[a+i][b+j] == 'W') {
                change++;
              }
            }
              // 이웃해 있는 경우
            else {
              if (color[a+i][b+j] == 'B') {
                change++;
              }
            }
          }
        }
      }
      if (min_change >= change) {
        min_change = change;
      }
    }
  }
}


int main(){
  int n, m;
  cin >> n >> m;

  char color_main[51][51];
  for (int i=0; i < n; i++) {
    for (int j=0; j < m; j++) {
      cin >> color_main[i][j];
    }
  }
  find_best(color_main, n, m);

  char color2[51][51];
  for (int i=0; i < n; i++) {
    for (int j=0; j < m; j++) {
      color2[i][j] = color_main[n-i-1][m-j-1];
    }
  }
  find_best(color2, n, m);


  char color3[51][51];
  for (int i=0; i < n; i++) {
    for (int j=0; j < m; j++) {
      color3[i][j] = color_main[i][m-j-1];
    }
  }
  find_best(color3, n, m);

  char color4[51][51];
  for (int i=0; i < n; i++) {
    for (int j=0; j < m; j++) {
      color4[i][j] = color_main[n-i-1][j];
    }
  }
  find_best(color4, n, m);

  cout << min_change << endl;

}