#include <iostream>
using namespace std;

bool free(char c,int i, int j, int row, int col){
return ((c == 'X' ||c == '.') && i < row && j < col);
}

int main(){
    int r, c, toSquash[5] = {0,0,0,0,0};
    cin >> r >> c;
    char table[r][c];
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        cin >> table[i][j];
      }
    }

    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        bool isParkable = (free(table[i][j],i,j,r,c) &&
                           free(table[i+1][j],i+1,j,r,c) &&
                           free(table[i][j+1],i,j+1,r,c) &&
                           free(table[i+1][j+1],i+1,j+1,r,c)
                           );
        if(isParkable){
            int cars = 0;
            for(int z = 0; z < 2; z++){
              for(int q = 0; q < 2; q++){
                if(table[i+z][j+q] == 'X'){cars++;}
              }
            }
            toSquash[cars] += 1;
        }
      }
    }
    for(int i = 0; i < 5; i++){
      cout << toSquash[i] << endl;
    }
}