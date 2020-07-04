int isPrefixOfWord(char * sentence, char * searchWord)
{
    int j,c=1,flag;
    for(int i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]==' ')
            c++;
        if(sentence[i]==searchWord[0]&&(i==0||sentence[i-1]==' '))
        {
            flag=0;
            for(j=0;j<searchWord[j]!='\0';)
            {
                if(sentence[i]==' ')
                {
                    c++;
                    break;
                }
                if(sentence[i++]!=searchWord[j++])
                {
                    flag=1;
                    break;
                }
                if(sentence[i]=='\0'&&searchWord[j]!='\0')
                    return -1;
            }
            if(flag==0&&searchWord[j]=='\0')
                return c;
        }
    }
    return -1;
}
