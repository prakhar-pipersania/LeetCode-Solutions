char * destCity(char *** paths, int pathsSize, int* pathsColSize)
{
    int i,j,result;
    for(i=0;i<pathsSize;i++)
    {
        for(j=0;j<pathsSize;j++)
        {
            result=strcmp(paths[i][1],paths[j][0]);
            if(result==0)
                break;
            if(j==pathsSize-1)
                return paths[i][1];
        }
    }
    return paths[pathsSize-1][*pathsColSize];
}
