class Solution {
public:
    string validIPAddress(string IP) 
    {
        std::vector<std::string> a={"IPv4","IPv6","Neither"};
        int sSize=IP.size(),d=0,c=0;
        for(int i=0;i<sSize;i++)
        {
            if(IP[i]=='.')
                d++;
            if(IP[i]==':')
                c++;
        }
        if((d!=3&&c!=7)||sSize<7||sSize>39)
            return a[2];
        if(d==3&&c!=7)
        {
            int flag=1,val=0;
            for(int i=0;i<sSize;i++)
            {
                if(flag==1&&IP[i]=='0')
                    if(IP[i+1]>='0'&&IP[i+1]<='9')
                        return a[2];
                flag=0;
                if(IP[i]>='0'&&IP[i]<='9')
                {
                    val=(val*10)+(IP[i]-48);
                    if(val>255)
                        return a[2];
                }
                else if(IP[i]=='.')
                {
                    val=0;
                    flag=1;
                    if(IP[i+1]=='.')
                        return a[2];
                }
                else
                {
                    return a[2];
                }
            }
            return a[0];
        }
        if(c==7&&d!=3)
        {
            int count=0;
            for(int i=0;i<sSize;i++)
            {
                if(IP[i]>='0'&&IP[i]<='9'||IP[i]>='a'&&IP[i]<='f'||IP[i]>='A'&&IP[i]<='F')
                {
                    count++;
                    if(count>4)
                        return a[2];
                }
                else if(IP[i]==':')
                {
                    count=0;
                    if(IP[i+1]==':')
                        return a[2];
                }
                else
                {
                    return a[2];
                }
            }
            return a[1];
        }
        return a[2];
    }
};
