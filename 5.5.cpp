#include <iostream>
#include <cmath>

using namespace std;
int main() {
        double n;
	cin>>n;
	double s=0;                         
	double i=1;
	while(i<=n){
		s=s+1/(i*i);
	i++;	
	}
		cout<<s;



return 0;
}