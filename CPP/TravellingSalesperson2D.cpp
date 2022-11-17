#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;

double euclideanDistance(pair<double, double> p1, pair<double, double> p2){
    double x = get<0>(p2) - get<0>(p1);
    double y = get<1>(p2) - get<1>(p1);
    return sqrt(x * x + y * y);
}

int main(){
  typedef vector<pair<double, double> > doubleVector;
  short n;
  cin >> n;

  int points[n];
  for(int i = 0; i < n; i++) points[i] = i;

  long fac = n;
  for(int i = n-1; i > 0; i--){
    fac *= i;
  }
  int possible[fac*n];
  cout << fac*n;

  for(int i = 0; i < fac*n; i+= n){
    for(int j = 0; j < n; i++){

    }
  }

  doubleVector points;
  for(int i = 0; i < n; i++){
    double x, y;
    cin >> x >> y;
    points.push_back(make_pair(x,y));
  }

}
