#include <iostream>

char *getline()
{
    char c;
    char * str = new char[1];
    unsigned i=0;
    for(; std::cin.get(c) && c != '\n'; i++) {
        str[i] = c;
        char* temp = new char[i+2];
        for (unsigned j=0; j<i+1; j++) {
            temp[j] = str[j];
        }
        delete [] str;
        str = temp;
    }
    str[i]='\0';
    return str;

}