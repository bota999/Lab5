#include <iostream>
#include <cmath>

using namespace std;
int main() {
        int n;
	cin>>n;
	int s=0;
	for( ; n>0; n/=10){
	
		cout<< n % 10;
        }    


return 0;
}