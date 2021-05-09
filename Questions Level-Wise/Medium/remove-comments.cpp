class Solution {
public:
    vector<string> removeComments(vector<string>& source) 
    {
        bool flag=0,flag2=0;
        vector<string> x,z;
        string temp;
        for(auto e: source)
        {
            for(int i=0;e.size()>1&&i<e.size()-1;i++)
            {
                if(!flag&&e[i]=='/'&&e[i+1]=='/')
                {
                    if(i>0&&!temp.size())
                        z={e.substr(0,i)};
                    else if(temp.size())
                        z={temp};
                    z=removeComments(z);
                    if(z.size())
                        x.push_back(z[0]);
                    z={};
                    temp="";
                    break;
                }
                else if(!flag&&e[i]=='/'&&e[i+1]=='*')
                {
                    flag=1;
                    if(i>0&&!temp.size())
                    {
                        z={e.substr(0,i)};
                        z=removeComments(z);
                        if(z.size())
                            temp+=z[0];
                    }
                    i++;
                }
                else if(flag&&e[i]=='*'&&e[i+1]=='/')
                {
                    flag=0;
                    int start=i+2,end;
                    for(int j=start;j<e.size()-1;j++)
                    {
                        if((e[j]=='/'&&e[j+1]=='/')||(e[j]=='/'&&e[j+1]=='*'))
                        {
                            end=j,flag2=1;
                            break;
                        }
                    }
                    if(flag2)
                    {
                        temp+=e.substr(start,end-start);
                        z={temp};
                        z=removeComments(z);
                        if(z.size())
                            temp=z[0];
                        flag2=0,i++;
                    }
                    else
                    {
                        temp+=e.substr(start,e.size()-start);
                        z={temp};
                        z=removeComments(z);
                        if(z.size())
                            x.push_back(z[0]);
                        z={};
                        temp="";
                        break;
                    }
                }
                else if(!flag&&i==e.size()-2)
                {
                    x.push_back(e);
                }
            }
            if(!flag&&e.size()==1)
                x.push_back(e);
        }
        return x;
    }
};