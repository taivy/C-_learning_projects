#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

	void append(String &other) {
        this->size += other.size;
        char *new_str = new char[this->size+1];
        strcpy(new_str, this->str);
        strcat(new_str, other.str);
        new_str[this->size] = '\0';
        char* p = p = this->str;
        delete [] p;
        this->str = new_str;
    }

	size_t size;
	char *str;
};