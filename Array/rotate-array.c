void rotate(int* nums, int numsSize, int k)
{
    int i,j;
    if(numsSize==1||k==0)
        return;  
    while(k!=0)
    {
        j=nums[numsSize-1];
        for(i=numsSize-2;i>=0;i--)
            nums[i+1]=nums[i];
        nums[0]=j;
        k--;
    }
}
