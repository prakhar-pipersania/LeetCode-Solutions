class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int flag;
        vector<vector<char>> b(board.size());
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
                board[i][j]==1?b[i].push_back('1'):b[i].push_back('0');
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b[i].size();j++)
            {
                flag=0;
                if(i-1>=0)
                {
                    if(j-1>=0&&b[i-1][j-1]=='1')
                        flag++;
                    if(b[i-1][j]=='1')
                        flag++;
                    if(j+1<b[i].size()&&b[i-1][j+1]=='1')
                        flag++;
                }
                if(i+1<b.size())
                {
                    if(j-1>=0&&b[i+1][j-1]=='1')
                        flag++;
                    if(b[i+1][j]=='1')
                        flag++;
                    if(j+1<b[i].size()&&b[i+1][j+1]=='1')
                        flag++;
                }
                if(j-1>=0&&b[i][j-1]=='1')
                    flag++;
                if(j+1<b[i].size()&&b[i][j+1]=='1')
                    flag++;
                
                if(b[i][j]=='0'&&flag==3)
                    board[i][j]=1;
                else if((b[i][j]=='1'&&flag<2)||(b[i][j]=='1'&&flag>3))
                    board[i][j]=0;
            }
        }
    }
};
