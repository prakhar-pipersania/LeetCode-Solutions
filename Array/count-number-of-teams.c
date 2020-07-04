int numTeams(int* rating, int ratingSize)
{
    int i,j,k,c=0;
    for(i=0;i<ratingSize;i++)
    {
        for(j=i+1;j<ratingSize;j++)
        {
            for(k=j+1;k<ratingSize;k++)
            {
                if(rating[i]<rating[j]&&rating[j]<rating[k]||rating[i]>rating[j]&&rating[j]>rating[k])
                    c++;
            }   
        }
    }
    return c;
}
