#include <iostream>
#include <cmath>

using namespace std;

int main() {
        int n,a;
	cin>>n;
	int s=0;
	
	for(int i=1; i<=n; i++){
		cin>>a;
	if(a==0) s++;	
	}
	cout<<s;



return 0;
}