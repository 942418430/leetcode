bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i = 0;
    if(flowerbed[0]+flowerbed[1]==0)
    {
        flowerbed[0] = 1;
        n--;
    }
    if(flowerbed[flowerbedSize-1]+flowerbed[flowerbedSize-2]==0)
    {
        flowerbed[flowerbedSize-1] = 1;
        n--;
    }
    for(i=1; i<flowerbedSize-1; i++)
    {
        if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1] == 0)
        {
            flowerbed[i] = 1;
            n--;
        }
    }
    if(n <= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
