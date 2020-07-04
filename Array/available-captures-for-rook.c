int numRookCaptures(char** board, int boardSize, int* boardColSize)
{
    int r,c,rook=0,kills=0,res=0;
    for(int i=0;i<boardSize;i++)
        for(int j=0;j<*boardColSize;j++)
            if(board[i][j]=='R')
            {
                r=i;c=j;
                break;
            }
    for(int i=0;i<boardSize;i++)
    {
        if(board[i][c]=='R')
            rook++;
        if(board[i][c]=='p'&&rook==0)
            if(kills==0)
                kills++;
        if(board[i][c]=='B'&&rook==0&&kills==1)
            kills=0;
        if(board[i][c]=='B'&&rook==1)
            break;
        if(board[i][c]=='p'&&rook==1)
        {
            kills++;
            break;
        } 
    }
    res+=kills;
    kills=rook=0;
    for(int i=0;i<*boardColSize;i++)
    {
        if(board[r][i]=='R')
            rook++;
        if(board[r][i]=='p'&&rook==0)
            if(kills==0)
                kills=1;
        if(board[r][i]=='B'&&rook==0&&kills==1)
            kills=0;
        if(board[r][i]=='B'&&rook==1)
            break;
        if(board[r][i]=='p'&&rook==1)
        {
            kills++;
            break;
        } 
    }
    res+=kills;
    return res;
}
