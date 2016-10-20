#include <iostream>
 
using namespace std;
int main (){
    int n;
    cin >> n;
    double s = 0;
    double p = 1;
 
 
    for (int i=0; i<=n; i+=1){
       
        if(i==0) p=1;
	else  p=p/i;
 
        s=s+p;
    }
 
    printf("%.5f\n",s );
 
   
return 0;
}