#include <iostream>
#include <cmath>

using namespace std;
int main() {
        double n;
	cin>>n;
	double s=0;
	for(int i=1; i<=n; i++){
		s=s+((1.0/i)/i);
	}
		cout<<s;

return 0;
}