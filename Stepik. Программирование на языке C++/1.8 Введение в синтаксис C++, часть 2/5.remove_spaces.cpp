#include <iostream>
using namespace std;

int main()
{
    int ws = 0;
    char c = '\0';
    while (cin.get(c)) {
        if (c != ' ') {
            cout << c;
            ws = 0;
        } else {
            if (!ws) 
                cout << c;
            ws = 1;
        }
    }

	return 0;
}