uint32_t reverseBits(uint32_t n) {
   int i = 1;
    uint32_t s = 0;
    for(i=1; i<=32; i++)
    {
        s = (s<<1) + (n&1);
        n >>= 1;
    }
    return s;
}
