int maxDistToClosest(int* seats, int seatsSize)
{
    int i,v=0,fv=1,start=0,end=0,c=0;
    for(i=0;i<seatsSize-1;i++)
    {
        if(seats[i]==0&&seats[i]==seats[i+1])
            c++;
        else
        {
            if(c>0&&c>=end-start)
            {
                start=i-c;
                end=i;
                if(start>0&&end<seatsSize-1&&seats[start-1]==1&&seats[end+1]==1)
                    v=((end-start)/2)+1;
                else
                    v=end-start+1;
                if(v>fv)
                    fv=v;
            }   
            c=0;
        }         
    }
    if(c>0)
    {
        start=i-c;
        end=i;
        if(start>0&&end<seatsSize-1&&seats[start-1]==1&&seats[end+1]==1)
            v=((end-start)/2)+1;
        else
            v=end-start+1;
        if(v>fv)
            fv=v;
    }
    return fv;
}
