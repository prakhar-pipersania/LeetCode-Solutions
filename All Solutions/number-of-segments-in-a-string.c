int countSegments(char * s)
{
    int i,c=0,v=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=32)
            c++;
        else
        {
            if(c>0)
            {
                c=0;v++; 
            }
        }
    }
    if(c>0)
        v++;
    return v;
}
