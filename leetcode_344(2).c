char* reverseString(char* s) {
    char* z = s;
    char* y = s + strlen(s)-1;
    char tmp = 0;
    while(z<y)
    {
        tmp = *z;
        *z = *y;
        *y = tmp;
        z++;
        y--;
    }
    return s;
}
