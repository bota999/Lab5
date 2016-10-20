#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int n, x;
	cin>>n;
	int s=0;
	for(int i = 0; i<=n; i++){
		s=s+i*i;
	}
		cout<<s;
return 0;
}