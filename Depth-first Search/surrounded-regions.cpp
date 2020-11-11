class Solution {
public:
    void remove(vector<vector<char>>& board,set<pair<int,int>> &x,int a,int b)
    {
        if(x.size()==0)
            return;
        x.erase({a,b});
        if(x.find({a-1,b})!=end(x))
            remove(board,x,a-1,b);
        if(x.find({a+1,b})!=end(x))
            remove(board,x,a+1,b);
        if(x.find({a,b-1})!=end(x))
            remove(board,x,a,b-1);
        if(x.find({a,b+1})!=end(x))
            remove(board,x,a,b+1);
    }
    void solve(vector<vector<char>>& board) 
    {
        int rsize=board.size();
        if(!rsize)
            return;
        int csize=board[0].size();
        if(!csize)
            return;
        set<pair<int,int>> x;
        for(int i=1;i<rsize-1;i++)
            for(int j=1;j<csize-1;j++)
                if(board[i][j]=='O')
                    x.insert({i,j});
        for(int i=0;i<csize;i++)
        {
            if(board[0][i]=='O')
                remove(board,x,0,i);
            if(board[rsize-1][i]=='O')
                remove(board,x,rsize-1,i);
        }
        for(int i=0;i<rsize;i++)
        {
            if(board[i][0]=='O')
                remove(board,x,i,0);
            if(board[i][csize-1]=='O')
                remove(board,x,i,csize-1);
        }
        for(auto e: x)
            board[e.first][e.second]='X';
    }
};
