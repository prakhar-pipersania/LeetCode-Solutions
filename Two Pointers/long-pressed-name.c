bool isLongPressedName(char * name, char * typed)
{
    int i=0,j=0;
    while(name[i]!='\0')
    {
        if(name[i]!=typed[j])
            return false;
        while(typed[j]==name[i]&&name[i]!=name[i+1])
            j++;
        if(typed[j]==name[i]&&name[i]==name[i+1])
            j++;
        i++;
    }
    if(typed[j]!='\0')
        return false;
    return true;
}
