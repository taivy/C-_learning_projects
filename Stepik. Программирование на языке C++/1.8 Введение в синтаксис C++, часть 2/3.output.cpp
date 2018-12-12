#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int current=0;
    int a=0, b=0;
    
    cin >> n;
    
    while (current < n) {
        cin >> a >> b;
        cout << (a+b) << endl;
        current++;
    }

    return 0;
}