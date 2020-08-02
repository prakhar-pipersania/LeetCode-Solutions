class Solution {
public:
    string alphabetBoardPath(string target) 
    {
        int row=0,col=0;
        string res;
        vector<int> a(2);
        unordered_map<char,vector<int>> x;
        for(char i='a';i<='z';i++)
        {
            x[i]=a,a[1]++;
            if(a[1]==5)
                a[0]++,a[1]=0;
        }
        for(int i=0;i<target.size();i++)
        {
            a=x[target[i]];
            if(target[i]!='z')
            {
                while(a[0]<row)
                    res+='U',row--;
                while(a[0]>row)
                    res+='D',row++;
                while(a[1]<col)
                    res+='L',col--;
                while(a[1]>col)
                    res+='R',col++;
            }
            else
            {
                while(a[0]>row)
                    res+='D',row++;
                if(col!=0)
                {
                    res.resize(res.size()-1);
                    while(a[1]<col)
                        res+='L',col--;
                    res+='D';
                }
            }
            res+='!';
        }
        return res;
    }
};
