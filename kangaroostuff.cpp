#include <iostream>
#include <string>
#include <math.h>

using namespace std;



string kangaroo(int x1, int v1, int x2, int v2) {
  if (v2 <= v1){
    long long int idk = (x2-x1)%(v2-v1);
    if ( idk == 0){
      return "YES";
    }
    else{
      return "NO";
    }
  }
  else {
    return "NO";
  }

}

int main(){
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin); //in.txt name can be changed
    freopen("out.txt", "w", stdout); //out.txt name can be changed
  #endif


  long long int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  cout << kangaroo(x1, v1, x2, v2);

}
