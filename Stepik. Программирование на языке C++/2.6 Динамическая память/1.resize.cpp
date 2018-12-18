char *resize(const char *str, unsigned size, unsigned new_size)
{
	char * new_str = new char[new_size];
    int i;
    for (i=0; i<new_size; i++) {
        new_str[i] = str[i];
    }
    delete[] str;
    return new_str;
}




