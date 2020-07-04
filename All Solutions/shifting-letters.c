char * shiftingLetters(char * S, int* shifts, int shiftsSize)
{
    int v=0;
    for(int i=shiftsSize-1;i>=0;i--)
    {
        v+=shifts[i]%26;
        shifts[i]=v%26;
    }
    for(int i=0;i<shiftsSize;i++)
    {
        v=S[i]+shifts[i];
        if(v>122)
            S[i]=v-26;
        else
            S[i]=v;
    }
    return S;
}
