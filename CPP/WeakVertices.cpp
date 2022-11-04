#include <iostream>
using namespace std;
void getNonTriangles(int n){
    int matrix[n][n];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> matrix[i][j];
      }
    }
    for(int i = 0; i < n; i++){
      bool isTriangle = false;
        for(int j = 0; (j < n && !isTriangle ); j++){
            for(int z = j + 1; z < n; z++){
              if(matrix[i][j] && matrix[i][z] && matrix[j][z] && matrix[z][j]){
                isTriangle = true;
                break;
              }
            }
        }
    cout << (!isTriangle ? (to_string(i) + " "): "");
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    while(n > 0){
      getNonTriangles(n);
      cin >> n;
    }
}