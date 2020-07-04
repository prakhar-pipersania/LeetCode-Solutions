bool rotateString(char * A, char * B)
{
    int j,ASize=strlen(A),BSize=strlen(B);
    if(ASize==0&&BSize==0)
        return true;
    if(ASize!=BSize)
        return false;
    for(int i=0;i<(2*BSize)-ASize;i++)
    {
        if(B[i%BSize]==A[0])
        {
            int p=i;
            for(j=0;j<ASize;j++)
            {
                if(B[p%BSize]!=A[j])
                    break;
                p++;
            }
            if(j==ASize)
                return true;
        }
    }
    return false;
}
