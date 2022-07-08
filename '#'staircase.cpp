//my first one solved without help!
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int x = 1; x <= n; x++){
        int space = n - x;
        int hash = x;
        while (space > 0){
            cout << " ";
            space--;
        }
        while (hash > 0){
            cout << "#";
            hash--;
        }
        cout << "\n";
      
        
    }

}
