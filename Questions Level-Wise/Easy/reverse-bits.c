uint32_t reverseBits(uint32_t n) 
{
    int i,a[32];
    for(i=0;i<32;i++)
        a[i]=0;
    i=31;
    while(n>0)
    {
        a[i--]=n%2;
        n/=2;
    }
    for(i=0;i<32;i++)
        n+=a[i]*pow(2,i);
    return n;
}
