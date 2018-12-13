char* reverseOnlyLetters(char* S) {
    int count = strlen(S) - 1;
    int i = 0;
    char a = 0;
    while(i<count)
    {
        while(i<count && (S[i]>'z' || S[i]<'a') && (S[i]>'Z' ||S[i]<'A')) 
        {
            i++;
        }
        while(i<count && (S[count]>'z'|| S[count]<'a') && (S[count]>'Z'||S[count]<'A'))
        {
            count--;
        }
        a = S[i];
        S[i] = S[count];
        S[count] = a; 
        i++;
        count--;
    }
    return S;
}
