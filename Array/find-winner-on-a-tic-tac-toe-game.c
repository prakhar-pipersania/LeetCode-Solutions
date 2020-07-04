char * tictactoe(int** moves, int movesSize, int* movesColSize)
{
    int i,j;
    char a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<movesSize;i++)
    {
        if(i%2==0)
            a[moves[i][0]][moves[i][1]]='X';
        else
            a[moves[i][0]][moves[i][1]]='O';
    }
    for(i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1]&&a[i][0]==a[i][2]&&a[i][0]!=' ')
        {
            if(movesSize%2!=0)
                return "A";
            else
                 return "B";
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[0][i]==a[1][i]&&a[0][i]==a[2][i]&&a[0][i]!=' ')
        {
            if(movesSize%2!=0)
                return "A";
            else
                return "B";
        }
    }
    if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0][0]!=' ')
    {
        if(movesSize%2!=0)
            return "A";
        else
            return "B";   
    }
    if(a[2][0]==a[1][1]&&a[2][0]==a[0][2]&&a[2][0]!=' ')
    {
        if(movesSize%2!=0)
            return "A";
        else
            return "B";
    }
    if(movesSize==9)
        return "Draw";
    return "Pending";
}
