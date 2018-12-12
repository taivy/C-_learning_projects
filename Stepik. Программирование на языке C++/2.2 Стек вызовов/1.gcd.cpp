#include <iostream>

using namespace std;

char revert();

char revert(){
    int c;
    cin >> c;
    if (c != 0) {
        revert();
        cout << c << ' ';
    };
        
};


int main()
{
    revert();
	return 0;
}