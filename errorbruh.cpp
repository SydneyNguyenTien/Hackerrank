//error code but i save it anyways, why? idk.

int main(){
    int a;
    int b;
    std::vector<std::string> idk = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cin >> a >> b;
        if(a <= 9 && a >= 1){
            cout << idk[a-1];
            cout << "\n";
    
        }    
        if(b >= 9){
             for(int x = a; x <= b; x++){
                 if (x <= 9){
                     cout << idk[x];
                 }
                 if( x > 9){
                    if(x % 2 == 0){
                    cout << "even";
                    cout << "\n";
                    }
                    else{
                    cout << "odd";
                    cout << "\n";
                    }
                
                }
                
                
                
             }
            
             
              
            
        }
       
            
           
        
        
    
}
