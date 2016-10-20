#include <iostream>
#include <cmath>

using namespace std;
int main() {
        int n,x,k;
	cin>>n>>x;
	int s=0;
	for( ; n>0; n/=10){
	
	if(n % 10==x)s++;
	
	} 
		cout<<s;



return 0;
}