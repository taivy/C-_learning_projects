#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

	String(size_t n, char c) {
        this->size = n;
        char *string = new char [size+1];
        for (int i=0; i<n; i++) {
            string[i] = c;
        }
        string[n] = '\0';
        this->str = string;
    }

	~String() {
        delete [] str;
    }
    

	size_t size;
	char *str;
};