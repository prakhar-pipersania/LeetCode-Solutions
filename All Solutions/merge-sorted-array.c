void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    if(m<1&&n<1)
        return;
    int i,j,k=0,a[nums1Size];
    for(i=0,j=0;i<m&&j<n;)
    {
        if(nums1[i]<=nums2[j])
            a[k++]=nums1[i++];
        else
            a[k++]=nums2[j++];
    }
    while(i<m)
        a[k++]=nums1[i++];
    while(j<n)
        a[k++]=nums2[j++];
    for(int i=0;i<nums1Size;i++)
        nums1[i]=a[i];
}
