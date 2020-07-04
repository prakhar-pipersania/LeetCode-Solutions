char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int l=0,h=lettersSize-1,mid;
    while(l<h)
    {
        mid=((h-l)/2)+l;   
        if(l==h-1)
        {
            if(letters[l]>target)
                return letters[l];
            else if(letters[h]>target)
                return letters[h];
            else
                break;
        }
        else if(letters[mid]<=target)
            l=mid;
        else
            h=mid;
    }
    return letters[0];
}
