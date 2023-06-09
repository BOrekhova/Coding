#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
    string s;
    cin >> s;
 
    int c, i = 0, q = 0;
    c = int(s[0]-'0');
 
    for(i = 1; i < (s.size() - 1); i++) {
        
        if (s[i] == '+') {
            
            q = int(s[i+1]-'0');
            
            c = c + q;
            
        } else if (s[i] == '-') {
            
            q = int(s[i+1]-'0');
            
            c = c - q;
     
        }
        
    }
    
    cout << c;
    
    return 0;
}