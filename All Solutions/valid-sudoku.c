bool isValidSudoku(char** board, int boardSize, int* boardColSize)
{
    int i,j,k,l,u,p,q,r,s;
    char a[9];
    int b,c,d,e,f,g,h,n,o;
    b=c=d=e=f=g=h=n=o=r=p=u=0;s=q=3;
    for(i=0;i<boardSize;i++)
    {
        for(j=0;j<boardSize;j++)
            a[j]=board[i][j];
        for(k=0;k<boardSize;k++)
        {
            switch(a[k])
            {
                case '1':b++;break;
                case '2':c++;break;
                case '3':d++;break;
                case '4':e++;break;
                case '5':f++;break;
                case '6':g++;break;
                case '7':h++;break;
                case '8':n++;break;
                case '9':o++;break;
            }
        }
        if(b>1||c>1||d>1||e>1||f>1||g>1||h>1||n>1||o>1)
            return false;
        b=c=d=e=f=g=h=n=o=0;
    }   
    for(i=0;i<boardSize;i++)
    {
        for(j=0;j<boardSize;j++)
            a[j]=board[j][i];
        for(k=0;k<boardSize;k++)
        {
            switch(a[k])
            {
                case '1':b++;break;
                case '2':c++;break;
                case '3':d++;break;
                case '4':e++;break;
                case '5':f++;break;
                case '6':g++;break;
                case '7':h++;break;
                case '8':n++;break;
                case '9':o++;break;
            }
        }
        if(b>1||c>1||d>1||e>1||f>1||g>1||h>1||n>1||o>1)
            return false;
        b=c=d=e=f=g=h=n=o=0;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=r;k<s;k++)
            {
                for(l=p;l<q;l++)
                {
                    a[u]=board[k][l];
                    u++;
                }
            }
            u=0;
            for(k=0;k<boardSize;k++)
            {
                switch(a[k])
                {
                    case '1':b++;break;
                    case '2':c++;break;
                    case '3':d++;break;
                    case '4':e++;break;
                    case '5':f++;break;
                    case '6':g++;break;
                    case '7':h++;break;
                    case '8':n++;break;
                    case '9':o++;break;
                }
            }
            if(b>1||c>1||d>1||e>1||f>1||g>1||h>1||n>1||o>1)
                return false;
            b=c=d=e=f=g=h=n=o=0;
            p+=3;q+=3;    
        }
        p=0;q=3;
        r+=3;s+=3;
    }
    return true;
}
