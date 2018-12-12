bool lemonadeChange(int* bills, int billsSize) {
    int a = 0;
    int b = 0;
    int i = 0;
    for(i=0; i<billsSize; i++)
    {
        if(bills[i] == 5)
        {
            a++;
        }
        else if(bills[i] == 10)
        {
            if(a >= 1)
            {
                a--;
                b++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(b>=1 && a>= 1)
            {
                b--;
                a--;
            }
            else if(a>=3)
            {
                a = a - 3;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
