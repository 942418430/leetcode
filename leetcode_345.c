char* reverseVowels(char* s) {
    char* z = s;
    char* y = s + strlen(s)-1;
    char tmp = 0;
    while(z<y)
    {
        while((*z != 'a') && (*z !='e') && (*z != 'i') && (*z != 'o') && (*z != 'u') && (*z != 'A') && (*z !='E') && (*z != 'I') && (*z != 'O') && (*z != 'U') && (z<y))
        {
            z++;
        }
        while((*y != 'a') && (*y != 'e') && (*y != 'i') && (*y != 'o') && (*y != 'u') && (*y != 'A') && (*y != 'E') && (*y != 'I') && (*y != 'O') && (*y != 'U') && (z<y))
        {
            y--;
        }      
        if(z<y)
        {
            tmp = *z;
            *z = *y;
            *y = tmp;
        }
        z++;
        y--;
    }
    return s;
}
