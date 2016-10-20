#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n, s, x;
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x==0) s++;
    }
    if (s==0) cout << "NO" << endl;
    else cout << "YES" << endl;


return 0;
}
 