class Solution {
public:
    string reformatNumber(string number) 
    {
        string x;
        short c=0;
        for(int i=0;i<number.size();i++)
        {
            if(number[i]>='0'&&number[i]<='9')
                x+=number[i],c++;
            if(c==3&&i+1!=number.size())
                x+='-',c=0;
        }
        if(x[x.size()-1]=='-')
            x.resize(x.size()-1);
        if(x[x.size()-2]=='-')
            x[x.size()-2]=x[x.size()-3],x[x.size()-3]='-';
        return x;
    }
};
