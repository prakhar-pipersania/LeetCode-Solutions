int removeDuplicates(int* nums, int numsSize)
{
	int i=1,j=0;
    if (numsSize< 2)
		return numsSize;
	while (i<numsSize) 
    {
		if (nums[i]!=nums[j])
        {
			j++;
			nums[j]=nums[i];
		}
    i++;
	}
	return j+1;
}
