int lengthOfLastWord(char* s) {
    int i = 0;
    int count = 0;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i] != ' ')
        {
            count++;
            if(i>0 && (s[i] != ' ') && (s[i-1] == ' '))
            {
                count = 0;
                count++;
            }
        }        
    }
    return count;
}
