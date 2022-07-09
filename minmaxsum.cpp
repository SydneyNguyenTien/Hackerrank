//this kinda broke me

#include <iostream>
#include <stdint.h>
using namespace std;
#include <math.h>
#include <vector>

int main(){
    long long int n = 0;
    long long int a;
    long long int small = 1000000000;
    long long int big = 0;
    for( int x = 0; x < 5; x++){
      cin >> a;
      n += a;
        
        if (a < small){
        small = a;
        }
        if (a > big){
        big = a;
        }
        
        
        
    }

    cout << n - big;
    
    cout << " " << n - small;
    


}
