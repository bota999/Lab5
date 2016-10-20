#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int n, x, k;
	cin>>n>>k;
	int s1=1;
	int s2=1;
	int s3=1;
	for(int i = 1; i<=n; i++){
		s1=s1*i;
	}
	for(int j=1; j<=k; j++){
		s2=s2*j;
	}
	for(int l=1; l<=(n-k); l++){
		s3=s3*l;
	}
	x=s1/(s2*s3);
		cout<<x;
return 0;
}
