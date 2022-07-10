#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
  long long int n;
  cin >> n;
  long long int g;
  long long int f = 0;
  long long int i;

  std::vector<int> candlestt;
  for (int x = n; x > 0; x--){
    cin >> i;
    candlestt.push_back(i);
    if (i > g){
      g = i;
    }

  }

  for (int z = 0; z < n; z++){
    if (candlestt[z] == g){
      f++;

    }
  }

  cout << f;

  





}
