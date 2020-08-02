class Solution {
public:
    void checkword(vector<vector<char>> board,string word,int &found,int row,int col,int findword)
    {
        if(findword==word.size())
            found=1;
        else
        {
            board[row][col]='0';
            if(col-1>=0&&board[row][col-1]==word[findword]&&found==0)
                checkword(board,word,found,row,col-1,findword+1);
            if(col+1<board[row].size()&&board[row][col+1]==word[findword]&&found==0)
                checkword(board,word,found,row,col+1,findword+1);
            if(row-1>=0&&board[row-1][col]==word[findword]&&found==0)
                checkword(board,word,found,row-1,col,findword+1);
            if(row+1<board.size()&&board[row+1][col]==word[findword]&&found==0)
                checkword(board,word,found,row+1,col,findword+1);
        }
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        int found=0;
        if(board.size()*board[0].size()<word.size())
            return false;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
                if(board[i][j]==word[0])
                {
                    checkword(board,word,found,i,j,1);
                    if(found==1)
                        return true;
                }
        return false;    
    }
};
