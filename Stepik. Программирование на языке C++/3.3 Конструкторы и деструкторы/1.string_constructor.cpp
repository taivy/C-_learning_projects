#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

	String(const char *str = "") {

        this->size = strlen(str);
        char *string = new char [size+1];
        strcpy(string, str);
        this->str = string;
        
    };

	size_t size;
	char *str;
};