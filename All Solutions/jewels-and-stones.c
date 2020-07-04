int numJewelsInStones(char * J, char * S)
{
    int i=0,j,k=0,sum=0;
    while(J[i]!='\0')
    {
        k=j=0;
        while(S[j]!='\0')
        {
            if(J[i]==S[j])
                k++;
            j++;
        }
        sum+=k;
        i++;
    }
    return sum;
}
