#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin >> t;
    int d = 1;
    int c = 0;
    for(int i = 1; i <= t; ++i){                                                            
        cout << d << " ";
        c++;
        if(c==d) {
         d++;
         c=0;
        }  
    }
    

return 0;
} 