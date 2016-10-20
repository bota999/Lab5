#include <iostream>
#include <cmath>

using namespace std;
int main (){

    int a, b, x;
    cin >> a >> b;
    for (int i=a; i<=b; i++)
    {
        x=(int)sqrt(i);
        if (x*x==i)
    {
         cout << i <<" ";
    }
	}
   
return 0;
}