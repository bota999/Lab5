#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    double n;
    double s=0;
    double k=-1;
    cin >> n;
    for (int i=1; i<=2*n+1; i+=2){
        k=k*(-1);
        s=s+(k/i);
    }
    cout << 4*s << endl;


return 0;
}