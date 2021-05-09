class Solution {
public:
    short checkbyte(short num)
    {
        short x=7,c=0;
        while((1<<x)&num)
        {
            c++,x--;
            if(c==6)
                break;
        }
        return c-1;
    }
    bool validUtf8(vector<int>& data) 
    {
        short byte=0,c;
        for(int i=0;i<data.size();i++)
        {
            c=checkbyte(data[i]);
            if(c>=0)
            {
                if(c>3||c==0||i+c>=data.size())
                    return false;
                i++;
                while(c>0&&!checkbyte(data[i]))
                    c--,i++;
                i--;
                if(c>0)
                    return false;
            }
        }
        return true;
    }
};
