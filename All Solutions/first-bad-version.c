// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int firstBadVersion(int n) 
{
    int x,y,l=1,h=n,mid;
    while(l<h)
    {
        mid=((h-l)/2)+l;
        x=isBadVersion(mid);
        y=isBadVersion(mid+1);     
        if(x==0&&y==1)
            return mid+1;
        else if(x==0)
            l=mid;
        else
            h=mid;
    }
    if(mid>0)
        return mid;
    else
        return 1;
}
