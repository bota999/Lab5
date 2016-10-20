#include <iostream>

using namespace std;
int main ()
{
    int a=2;
    int n;
    int s=1, x=1;
    cin >> n;
    for (int i=1; i<=n; i++){
        x=x*a;
        s=s+x;
    }
    cout <<s;

return 0;
}