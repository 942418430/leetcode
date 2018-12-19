char* reverseString(char* s) {
    int z = 0;
    int y = strlen(s)-1;
    char tmp = 0;
    while(z < y)
    {
        tmp = s[z];
        s[z] = s[y];
        s[y] = tmp;
        z++;
        y--;
    }
    return s;
}
