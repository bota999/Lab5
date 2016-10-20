#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int N;
	cin>>N;
	int s=1;
	
	for(int i=1; i<=N; i++){
		s=s*i;
	}
			cout<<s;

return 0;
}