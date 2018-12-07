int romanToInt(char* s) {
    int ret = 0;
    //从前向后遍历，累加起来。遇到X,C的时候要判断下一个字符来确定加减
    while(*s)
    {
        switch(*s)
        {
            case 'M':
                ret += 1000;
                break;
            case 'D':
                ret += 500;
                break;
            case 'C':
                if(*(s+1) == 'M' || *(s+1) == 'D')
                    ret -= 100;
                else
                    ret += 100;
                    break;
            case 'L':
                ret += 50;
                break;
            case 'X':
                if(*(s+1) == 'C' || *(s+1) == 'L')
                    ret -= 10;
                else
                    ret += 10;
                break;
            case 'V':
                ret += 5;
                break;
            case 'I':
                if(*(s+1) == 'V' || (*(s+1) == 'X'))  
                    ret -= 1;
                else
                    ret += 1;
                break;
        }
        s++;
    }
    return ret;
}
