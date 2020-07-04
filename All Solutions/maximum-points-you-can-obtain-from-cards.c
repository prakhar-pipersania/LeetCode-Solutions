int maxScore(int* cardPoints, int cardPointsSize, int k)
{
    int start=0,end=cardPointsSize-1,suml=0,sumr=0,r=cardPointsSize-k,l=k-1,v=0;
    if(k==cardPointsSize)
    {
        for(int i=0;i<=end;i++)
            v+=cardPoints[i];
        return v;
    }
    for(int i=start;i<=l;i++)
        suml+=cardPoints[i];
    for(int i=end;i>=r;i--)
        sumr+=cardPoints[i];
    for(int i=0;i<k;i++)
    {
        if(suml>sumr)
        {
            v+=cardPoints[start];
            suml-=cardPoints[start];
            sumr-=cardPoints[r];
            start++;r++;
        }
        else
        {
            v+=cardPoints[end];
            sumr-=cardPoints[end];
            suml-=cardPoints[l];
            end--;l--;
        }
    }   
    return v;   
}
