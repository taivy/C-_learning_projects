unsigned strlen(const char *str)
{
    int cnt = 0;
    while (str[cnt]) {
        cnt++;
    }
    return cnt;
}




