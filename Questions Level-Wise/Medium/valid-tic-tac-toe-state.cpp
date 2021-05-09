class Solution {
public:
    bool validTicTacToe(vector<string>& board) 
    {
        short x=0,o=0,t1=0,t2=0,p=0,q=0;
        for(auto e: board)
            for(auto e1: e)
            {
                if(e1=='X')
                    x++;
                else if(e1=='O')
                    o++;
            }
        if(x==o||x==o+1)
        {
            for(int i=0;i<3;i++)
            {
                if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][0]!=' ')
                    board[i][0]=='X'?t1++,p++:t2++;
                else if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[0][i]!=' ')
                    board[0][i]=='X'?t1++,q++:t2++;
            }
            if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[0][0]!=' ')
                board[0][0]=='X'?t1++:t2++;
            else if(board[2][0]==board[1][1]&&board[2][0]==board[0][2]&&board[2][0]!=' ')
                board[2][0]=='X'?t1++:t2++;
            if(t1==2)
                return (p==q?1:0);
            return ((t1+t2>1)||(t1>0&&x==o)||(t2==1&&x>o))?0:1;
        }
        return false;
    }
};