#include <iostream>
#include <cmath>

using namespace std;
int main() {
        double a, n;
	double s=1, x=1;
	cin>>a>>n;
	for(int i=1; i<=n; i++){
	x=x*a;
	s=s+x;
	}
		cout<<s;


return 0;
}