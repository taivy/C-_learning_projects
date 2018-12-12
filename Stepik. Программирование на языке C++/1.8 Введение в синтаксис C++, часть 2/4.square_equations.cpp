#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;

    cin >> a >> b >> c;
   
    int d = b*b - 4*a*c;
    if (d < 0) {
        cout << "No real roots" << endl;
        return 0;
    } else if (d==0) {
        x1 = -(b/(2*a));
        x2=x1;
    } else {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
    }
    cout << x1 << " " << x2 << endl;

    return 0;
}