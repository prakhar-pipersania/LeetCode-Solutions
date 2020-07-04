/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int num_people, int* returnSize)
{
    int i,n=1,*p;
    *returnSize=num_people;
    p=(int*)calloc(sizeof(int),num_people);
    while(candies>0)
    {
        for(i=0;i<num_people;i++)
        {
            if(candies<n)
            {
                p[i]+=candies;
                candies=0;
                break;
            }
            else
            {
            candies-=n;
            p[i]+=n++;
            }
        }
    }
    return p;
}
