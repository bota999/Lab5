#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double  a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double s=0;
    for (double i=0; i<=1000; i++)
        if ((a*i*i*i+b*i*i+c*i+d)/(i-e)==0){
            s++;
        }
        cout << s << endl;
return 0;
}