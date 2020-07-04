class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int x,Size=str2.size();
        for(int i=0;str1[i]!='\0';i++)
            if(str1[i]!=str2[i%str2.size()])
                return "";
        if(str1.size()%str2.size()!=0)
        {
            if(str1.size()<str2.size())
                Size=str1.size();
            for(int i=1;i<Size;i++)
                if(str1.size()%i==0&&str2.size()%i==0)
                    x=i;
            str2.resize(x);
        }
        return str2;
    }
};
