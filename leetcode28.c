int strStr(char* haystack, char* needle) {
    char* c = haystack;
    char* p = haystack;
    char* q = needle;
    if(*needle == '\0')
    {
        return 0;
    }
    while(*haystack)
    {
        p = haystack;
        while((*p) && (*p == *needle))
        {
            p++;
            needle++;
        }
        if(*needle == '\0')
        {
            return (haystack - c);
        }
        haystack++;
        needle = q;
    }
    return -1;
}
