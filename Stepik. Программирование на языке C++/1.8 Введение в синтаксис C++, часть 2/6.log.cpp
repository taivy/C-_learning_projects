#include <iostream>
using namespace std;

int log(int a);

int log(int a){
    int n = 0;
    while (a > 1) {
        a = a / 2;
        n += 1;
    };
    return n;
};

int main()
{
    int answr, n, i;
    double d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> d;
        answr = log(d);
        cout << answr << endl;
    }
}
