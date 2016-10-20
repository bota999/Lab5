#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, s, x, m, p;
    cin >> n;
    s = 0; 
    p =0; 
    m=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x==0) s++;
        if (x>0) p++;
        if (x<0) m++;
    }
    cout<<s<<" "<<p<<" "<<m;

return 0;
}
 